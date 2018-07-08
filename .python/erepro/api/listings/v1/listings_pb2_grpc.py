# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
import grpc

from erepro.api.listings.v1 import listings_pb2 as erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2


class ListingsStub(object):
  """Manages cloud listing resources.
  """

  def __init__(self, channel):
    """Constructor.

    Args:
      channel: A grpc.Channel.
    """
    self.ListListings = channel.unary_unary(
        '/erepro.api.listings.v1.Listings/ListListings',
        request_serializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.ListListingsRequest.SerializeToString,
        response_deserializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.ListListingsResponse.FromString,
        )
    self.SearchListings = channel.unary_unary(
        '/erepro.api.listings.v1.Listings/SearchListings',
        request_serializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.SearchListingsRequest.SerializeToString,
        response_deserializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.SearchListingsResponse.FromString,
        )
    self.GetListing = channel.unary_unary(
        '/erepro.api.listings.v1.Listings/GetListing',
        request_serializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.GetListingRequest.SerializeToString,
        response_deserializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.Listing.FromString,
        )
    self.CreateListing = channel.unary_unary(
        '/erepro.api.listings.v1.Listings/CreateListing',
        request_serializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.CreateListingRequest.SerializeToString,
        response_deserializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.Listing.FromString,
        )
    self.UpdateListing = channel.unary_unary(
        '/erepro.api.listings.v1.Listings/UpdateListing',
        request_serializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.UpdateListingRequest.SerializeToString,
        response_deserializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.Listing.FromString,
        )
    self.DeleteListing = channel.unary_unary(
        '/erepro.api.listings.v1.Listings/DeleteListing',
        request_serializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.DeleteListingRequest.SerializeToString,
        response_deserializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.Listing.FromString,
        )


class ListingsServicer(object):
  """Manages cloud listing resources.
  """

  def ListListings(self, request, context):
    """List the availalbe listings
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def SearchListings(self, request, context):
    """Search for listings that match specific filter criteria.
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def GetListing(self, request, context):
    """Retrives a listing identified by the supplied listing name
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def CreateListing(self, request, context):
    """Create a listing in the database
    google.longrunning.Operation) {
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def UpdateListing(self, request, context):
    """Update a listing
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def DeleteListing(self, request, context):
    """Delete a listing
    """
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')


def add_ListingsServicer_to_server(servicer, server):
  rpc_method_handlers = {
      'ListListings': grpc.unary_unary_rpc_method_handler(
          servicer.ListListings,
          request_deserializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.ListListingsRequest.FromString,
          response_serializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.ListListingsResponse.SerializeToString,
      ),
      'SearchListings': grpc.unary_unary_rpc_method_handler(
          servicer.SearchListings,
          request_deserializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.SearchListingsRequest.FromString,
          response_serializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.SearchListingsResponse.SerializeToString,
      ),
      'GetListing': grpc.unary_unary_rpc_method_handler(
          servicer.GetListing,
          request_deserializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.GetListingRequest.FromString,
          response_serializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.Listing.SerializeToString,
      ),
      'CreateListing': grpc.unary_unary_rpc_method_handler(
          servicer.CreateListing,
          request_deserializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.CreateListingRequest.FromString,
          response_serializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.Listing.SerializeToString,
      ),
      'UpdateListing': grpc.unary_unary_rpc_method_handler(
          servicer.UpdateListing,
          request_deserializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.UpdateListingRequest.FromString,
          response_serializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.Listing.SerializeToString,
      ),
      'DeleteListing': grpc.unary_unary_rpc_method_handler(
          servicer.DeleteListing,
          request_deserializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.DeleteListingRequest.FromString,
          response_serializer=erepro_dot_api_dot_listings_dot_v1_dot_listings__pb2.Listing.SerializeToString,
      ),
  }
  generic_handler = grpc.method_handlers_generic_handler(
      'erepro.api.listings.v1.Listings', rpc_method_handlers)
  server.add_generic_rpc_handlers((generic_handler,))
