make PROTOINCLUDE=$GOPATH/src/github.com/googleapis/googleapis LANGUAGE=go OUTPUT=.
make PROTOINCLUDE=$GOPATH/src/github.com/googleapis/googleapis LANGUAGE=python OUTPUT=.python/
find .python/ -type f -name \*.go -delete


