// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: erepro/api/branches/v1/branches.proto

#include "erepro/api/branches/v1/branches.pb.h"
#include "erepro/api/branches/v1/branches.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace erepro {
namespace api {
namespace branches {
namespace v1 {

static const char* Branches_method_names[] = {
  "/erepro.api.branches.v1.Branches/ListBranches",
  "/erepro.api.branches.v1.Branches/SearchBranches",
  "/erepro.api.branches.v1.Branches/GetBranch",
  "/erepro.api.branches.v1.Branches/CreateBranch",
  "/erepro.api.branches.v1.Branches/UpdateBranch",
  "/erepro.api.branches.v1.Branches/DeleteBranch",
};

std::unique_ptr< Branches::Stub> Branches::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Branches::Stub> stub(new Branches::Stub(channel));
  return stub;
}

Branches::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_ListBranches_(Branches_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SearchBranches_(Branches_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetBranch_(Branches_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateBranch_(Branches_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateBranch_(Branches_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteBranch_(Branches_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Branches::Stub::ListBranches(::grpc::ClientContext* context, const ::erepro::api::branches::v1::ListBranchesRequest& request, ::erepro::api::branches::v1::ListBranchesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ListBranches_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::erepro::api::branches::v1::ListBranchesResponse>* Branches::Stub::AsyncListBranchesRaw(::grpc::ClientContext* context, const ::erepro::api::branches::v1::ListBranchesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::erepro::api::branches::v1::ListBranchesResponse>::Create(channel_.get(), cq, rpcmethod_ListBranches_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::erepro::api::branches::v1::ListBranchesResponse>* Branches::Stub::PrepareAsyncListBranchesRaw(::grpc::ClientContext* context, const ::erepro::api::branches::v1::ListBranchesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::erepro::api::branches::v1::ListBranchesResponse>::Create(channel_.get(), cq, rpcmethod_ListBranches_, context, request, false);
}

::grpc::Status Branches::Stub::SearchBranches(::grpc::ClientContext* context, const ::erepro::api::branches::v1::SearchBranchesRequest& request, ::erepro::api::branches::v1::SearchBranchesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SearchBranches_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::erepro::api::branches::v1::SearchBranchesResponse>* Branches::Stub::AsyncSearchBranchesRaw(::grpc::ClientContext* context, const ::erepro::api::branches::v1::SearchBranchesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::erepro::api::branches::v1::SearchBranchesResponse>::Create(channel_.get(), cq, rpcmethod_SearchBranches_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::erepro::api::branches::v1::SearchBranchesResponse>* Branches::Stub::PrepareAsyncSearchBranchesRaw(::grpc::ClientContext* context, const ::erepro::api::branches::v1::SearchBranchesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::erepro::api::branches::v1::SearchBranchesResponse>::Create(channel_.get(), cq, rpcmethod_SearchBranches_, context, request, false);
}

::grpc::Status Branches::Stub::GetBranch(::grpc::ClientContext* context, const ::erepro::api::branches::v1::GetBranchRequest& request, ::erepro::api::branches::v1::Branch* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetBranch_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::erepro::api::branches::v1::Branch>* Branches::Stub::AsyncGetBranchRaw(::grpc::ClientContext* context, const ::erepro::api::branches::v1::GetBranchRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::erepro::api::branches::v1::Branch>::Create(channel_.get(), cq, rpcmethod_GetBranch_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::erepro::api::branches::v1::Branch>* Branches::Stub::PrepareAsyncGetBranchRaw(::grpc::ClientContext* context, const ::erepro::api::branches::v1::GetBranchRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::erepro::api::branches::v1::Branch>::Create(channel_.get(), cq, rpcmethod_GetBranch_, context, request, false);
}

::grpc::Status Branches::Stub::CreateBranch(::grpc::ClientContext* context, const ::erepro::api::branches::v1::CreateBranchRequest& request, ::google::longrunning::Operation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateBranch_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* Branches::Stub::AsyncCreateBranchRaw(::grpc::ClientContext* context, const ::erepro::api::branches::v1::CreateBranchRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_CreateBranch_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::longrunning::Operation>* Branches::Stub::PrepareAsyncCreateBranchRaw(::grpc::ClientContext* context, const ::erepro::api::branches::v1::CreateBranchRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::longrunning::Operation>::Create(channel_.get(), cq, rpcmethod_CreateBranch_, context, request, false);
}

::grpc::Status Branches::Stub::UpdateBranch(::grpc::ClientContext* context, const ::erepro::api::branches::v1::UpdateBranchRequest& request, ::erepro::api::branches::v1::Branch* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateBranch_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::erepro::api::branches::v1::Branch>* Branches::Stub::AsyncUpdateBranchRaw(::grpc::ClientContext* context, const ::erepro::api::branches::v1::UpdateBranchRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::erepro::api::branches::v1::Branch>::Create(channel_.get(), cq, rpcmethod_UpdateBranch_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::erepro::api::branches::v1::Branch>* Branches::Stub::PrepareAsyncUpdateBranchRaw(::grpc::ClientContext* context, const ::erepro::api::branches::v1::UpdateBranchRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::erepro::api::branches::v1::Branch>::Create(channel_.get(), cq, rpcmethod_UpdateBranch_, context, request, false);
}

::grpc::Status Branches::Stub::DeleteBranch(::grpc::ClientContext* context, const ::erepro::api::branches::v1::DeleteBranchRequest& request, ::erepro::api::branches::v1::Branch* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteBranch_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::erepro::api::branches::v1::Branch>* Branches::Stub::AsyncDeleteBranchRaw(::grpc::ClientContext* context, const ::erepro::api::branches::v1::DeleteBranchRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::erepro::api::branches::v1::Branch>::Create(channel_.get(), cq, rpcmethod_DeleteBranch_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::erepro::api::branches::v1::Branch>* Branches::Stub::PrepareAsyncDeleteBranchRaw(::grpc::ClientContext* context, const ::erepro::api::branches::v1::DeleteBranchRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::erepro::api::branches::v1::Branch>::Create(channel_.get(), cq, rpcmethod_DeleteBranch_, context, request, false);
}

Branches::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Branches_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Branches::Service, ::erepro::api::branches::v1::ListBranchesRequest, ::erepro::api::branches::v1::ListBranchesResponse>(
          std::mem_fn(&Branches::Service::ListBranches), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Branches_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Branches::Service, ::erepro::api::branches::v1::SearchBranchesRequest, ::erepro::api::branches::v1::SearchBranchesResponse>(
          std::mem_fn(&Branches::Service::SearchBranches), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Branches_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Branches::Service, ::erepro::api::branches::v1::GetBranchRequest, ::erepro::api::branches::v1::Branch>(
          std::mem_fn(&Branches::Service::GetBranch), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Branches_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Branches::Service, ::erepro::api::branches::v1::CreateBranchRequest, ::google::longrunning::Operation>(
          std::mem_fn(&Branches::Service::CreateBranch), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Branches_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Branches::Service, ::erepro::api::branches::v1::UpdateBranchRequest, ::erepro::api::branches::v1::Branch>(
          std::mem_fn(&Branches::Service::UpdateBranch), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Branches_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Branches::Service, ::erepro::api::branches::v1::DeleteBranchRequest, ::erepro::api::branches::v1::Branch>(
          std::mem_fn(&Branches::Service::DeleteBranch), this)));
}

Branches::Service::~Service() {
}

::grpc::Status Branches::Service::ListBranches(::grpc::ServerContext* context, const ::erepro::api::branches::v1::ListBranchesRequest* request, ::erepro::api::branches::v1::ListBranchesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Branches::Service::SearchBranches(::grpc::ServerContext* context, const ::erepro::api::branches::v1::SearchBranchesRequest* request, ::erepro::api::branches::v1::SearchBranchesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Branches::Service::GetBranch(::grpc::ServerContext* context, const ::erepro::api::branches::v1::GetBranchRequest* request, ::erepro::api::branches::v1::Branch* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Branches::Service::CreateBranch(::grpc::ServerContext* context, const ::erepro::api::branches::v1::CreateBranchRequest* request, ::google::longrunning::Operation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Branches::Service::UpdateBranch(::grpc::ServerContext* context, const ::erepro::api::branches::v1::UpdateBranchRequest* request, ::erepro::api::branches::v1::Branch* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Branches::Service::DeleteBranch(::grpc::ServerContext* context, const ::erepro::api::branches::v1::DeleteBranchRequest* request, ::erepro::api::branches::v1::Branch* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace erepro
}  // namespace api
}  // namespace branches
}  // namespace v1
