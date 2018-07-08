# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
import grpc

from erepro.api.branches.v1 import branches_pb2 as erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2


class BranchesStub(object):
  """Manages cloud branch resources.
  """

  def __init__(self, channel):
    """Constructor.

    Args:
      channel: A grpc.Channel.
    """
    self.ListBranches = channel.unary_unary(
        '/erepro.api.branches.v1.Branches/ListBranches',
        request_serializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.ListBranchesRequest.SerializeToString,
        response_deserializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.ListBranchesResponse.FromString,
        )
    self.SearchBranches = channel.unary_unary(
        '/erepro.api.branches.v1.Branches/SearchBranches',
        request_serializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.SearchBranchesRequest.SerializeToString,
        response_deserializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.SearchBranchesResponse.FromString,
        )
    self.GetBranch = channel.unary_unary(
        '/erepro.api.branches.v1.Branches/GetBranch',
        request_serializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.GetBranchRequest.SerializeToString,
        response_deserializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.Branch.FromString,
        )
    self.CreateBranch = channel.unary_unary(
        '/erepro.api.branches.v1.Branches/CreateBranch',
        request_serializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.CreateBranchRequest.SerializeToString,
        response_deserializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.Branch.FromString,
        )
    self.UpdateBranch = channel.unary_unary(
        '/erepro.api.branches.v1.Branches/UpdateBranch',
        request_serializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.UpdateBranchRequest.SerializeToString,
        response_deserializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.Branch.FromString,
        )
    self.DeleteBranch = channel.unary_unary(
        '/erepro.api.branches.v1.Branches/DeleteBranch',
        request_serializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.DeleteBranchRequest.SerializeToString,
        response_deserializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.Branch.FromString,
        )


class BranchesServicer(object):
  """Manages cloud branch resources.
  """

  def ListBranches(self, request, context):
    """List the availalbe Branches
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def SearchBranches(self, request, context):
    """Search for Branches that match specific filter criteria.
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def GetBranch(self, request, context):
    """Retrives a branch identified by the supplied branch name
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def CreateBranch(self, request, context):
    """Create a Branch in the database
    (google.longrunning.Operation) {
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def UpdateBranch(self, request, context):
    """Update a branch
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def DeleteBranch(self, request, context):
    """Delete a branch
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')


def add_BranchesServicer_to_server(servicer, server):
  rpc_method_handlers = {
      'ListBranches': grpc.unary_unary_rpc_method_handler(
          servicer.ListBranches,
          request_deserializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.ListBranchesRequest.FromString,
          response_serializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.ListBranchesResponse.SerializeToString,
      ),
      'SearchBranches': grpc.unary_unary_rpc_method_handler(
          servicer.SearchBranches,
          request_deserializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.SearchBranchesRequest.FromString,
          response_serializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.SearchBranchesResponse.SerializeToString,
      ),
      'GetBranch': grpc.unary_unary_rpc_method_handler(
          servicer.GetBranch,
          request_deserializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.GetBranchRequest.FromString,
          response_serializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.Branch.SerializeToString,
      ),
      'CreateBranch': grpc.unary_unary_rpc_method_handler(
          servicer.CreateBranch,
          request_deserializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.CreateBranchRequest.FromString,
          response_serializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.Branch.SerializeToString,
      ),
      'UpdateBranch': grpc.unary_unary_rpc_method_handler(
          servicer.UpdateBranch,
          request_deserializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.UpdateBranchRequest.FromString,
          response_serializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.Branch.SerializeToString,
      ),
      'DeleteBranch': grpc.unary_unary_rpc_method_handler(
          servicer.DeleteBranch,
          request_deserializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.DeleteBranchRequest.FromString,
          response_serializer=erepro_dot_api_dot_branches_dot_v1_dot_branches__pb2.Branch.SerializeToString,
      ),
  }
  generic_handler = grpc.method_handlers_generic_handler(
      'erepro.api.branches.v1.Branches', rpc_method_handlers)
  server.add_generic_rpc_handlers((generic_handler,))
