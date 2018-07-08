# This is a simple Makefile that generates client library source code
# for Google APIs using Protocol Buffers and gRPC for any supported
# language. However, it does not compile the generated code into final
# libraries that can be directly used with application code.
#
# Syntax example: make OUTPUT=./output LANGUAGE=java
#

# Choose the output directory
OUTPUT ?= ./gens

# Choose the target language.
LANGUAGE ?= python

# Choose grpc plugin
GRPCPLUGIN ?= /usr/local/bin/grpc_$(LANGUAGE)_plugin

# Choose the proto include directory.
PROTOINCLUDE ?= /usr/local/include

# Choose protoc binary
PROTOC ?= protoc

# Compile the entire repository
#
# NOTE: if "protoc" command is not in the PATH, you need to modify this file.
#

# ifeq ($(LANGUAGE),go)
# $(error Go source files are not generated from this repository. See: https://github.com/google/go-genproto)
# endif

FLAGS+= --proto_path=.:$(PROTOINCLUDE)

ifneq ($(LANGUAGE), go)
FLAGS+=	--plugin=protoc-gen-grpc=$(GRPCPLUGIN)
FLAGS_OUT+= --grpc_out=$(OUTPUT)
endif

FLAGS_OUT+= --$(LANGUAGE)_out=plugins=grpc:$(OUTPUT)
FLAGS_OUT+= --grpc-gateway_out=$(OUTPUT)
FLAGS_OUT+= --swagger_out=logtostderr=true:$(OUTPUT)

SUFFIX:= pb.${LANGUAGE}
GW_SUFFIX:= pb.gw.${LANGUAGE}

DEPS:= $(shell find . $(PROTOINCLUDE)/google/protobuf -type f -name '*.proto' | sed "s/proto$$/$(SUFFIX)/")

all: $(DEPS)

%.$(SUFFIX):  %.proto
	mkdir -p $(OUTPUT)
	$(PROTOC) $(FLAGS) $(FLAGS_OUT) $*.proto
	$(PROTOC) $(FLAGS) $*.proto --doc_out=$(shell dirname $(OUTPUT)/$*.proto)
	$(PROTOC) $(FLAGS) $*.proto --include_source_info --include_imports --descriptor_set_out=$(shell dirname $(OUTPUT)/$*.proto)/descriptors.protoset

clean:
	rm $(patsubst %,$(OUTPUT)/%,$(DEPS)) 2> /dev/null
	rm -rfd $(OUTPUT)

