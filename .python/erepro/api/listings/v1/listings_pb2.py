# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: erepro/api/listings/v1/listings.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.api import annotations_pb2 as google_dot_api_dot_annotations__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2
from google.protobuf import field_mask_pb2 as google_dot_protobuf_dot_field__mask__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='erepro/api/listings/v1/listings.proto',
  package='erepro.api.listings.v1',
  syntax='proto3',
  serialized_options=_b('Z>github.com/eliaszs/erepro-apis/erepro/api/listings/v1;listings'),
  serialized_pb=_b('\n%erepro/api/listings/v1/listings.proto\x12\x16\x65repro.api.listings.v1\x1a\x1cgoogle/api/annotations.proto\x1a\x1fgoogle/protobuf/timestamp.proto\x1a google/protobuf/field_mask.proto\"\x93\x02\n\x07Listing\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\x14\n\x0c\x64isplay_name\x18\x02 \x01(\t\x12\x0f\n\x07\x61\x64\x64ress\x18\x03 \x01(\t\x12\x0f\n\x07no_beds\x18\x04 \x01(\r\x12\x10\n\x08no_baths\x18\x05 \x01(\r\x12\r\n\x05price\x18\x06 \x01(\x04\x12\x0e\n\x06status\x18\x07 \x01(\t\x12/\n\x0b\x63reate_time\x18\x08 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12/\n\x0bupdate_time\x18\t \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12/\n\x0b\x64\x65lete_time\x18\n \x01(\x0b\x32\x1a.google.protobuf.Timestamp\"Q\n\x13ListListingsRequest\x12\x11\n\tpage_size\x18\x01 \x01(\x05\x12\x12\n\npage_token\x18\x02 \x01(\t\x12\x13\n\x0bshow_delete\x18\x03 \x01(\x08\"b\n\x14ListListingsResponse\x12\x31\n\x08listings\x18\x01 \x03(\x0b\x32\x1f.erepro.api.listings.v1.Listing\x12\x17\n\x0fnext_page_token\x18\x02 \x01(\t\"M\n\x15SearchListingsRequest\x12\x11\n\tpage_size\x18\x01 \x01(\x05\x12\x12\n\npage_token\x18\x02 \x01(\t\x12\r\n\x05query\x18\x03 \x01(\t\"d\n\x16SearchListingsResponse\x12\x31\n\x08listings\x18\x01 \x03(\x0b\x32\x1f.erepro.api.listings.v1.Listing\x12\x17\n\x0fnext_page_token\x18\x02 \x01(\t\"!\n\x11GetListingRequest\x12\x0c\n\x04name\x18\x01 \x01(\t\"H\n\x14\x43reateListingRequest\x12\x30\n\x07listing\x18\x01 \x01(\x0b\x32\x1f.erepro.api.listings.v1.Listing\"y\n\x14UpdateListingRequest\x12\x30\n\x07listing\x18\x01 \x01(\x0b\x32\x1f.erepro.api.listings.v1.Listing\x12/\n\x0bupdate_mask\x18\x02 \x01(\x0b\x32\x1a.google.protobuf.FieldMask\"$\n\x14\x44\x65leteListingRequest\x12\x0c\n\x04name\x18\x01 \x01(\t\"\xad\x01\n\x10ListingOperation\x12\x0c\n\x04name\x18\x01 \x01(\t\x12N\n\x0eoperation_type\x18\x02 \x01(\x0e\x32\x36.erepro.api.listings.v1.ListingOperation.OperationType\";\n\rOperationType\x12\x1e\n\x1aOPERATION_TYPE_UNSPECIFIED\x10\x00\x12\n\n\x06\x43REATE\x10\x01\x32\xa5\x06\n\x08Listings\x12\x7f\n\x0cListListings\x12+.erepro.api.listings.v1.ListListingsRequest\x1a,.erepro.api.listings.v1.ListListingsResponse\"\x14\x82\xd3\xe4\x93\x02\x0e\x12\x0c/v1/listings\x12\x8f\x01\n\x0eSearchListings\x12-.erepro.api.listings.v1.SearchListingsRequest\x1a..erepro.api.listings.v1.SearchListingsResponse\"\x1e\x82\xd3\xe4\x93\x02\x18\"\x13/v1/listings:search:\x01*\x12w\n\nGetListing\x12).erepro.api.listings.v1.GetListingRequest\x1a\x1f.erepro.api.listings.v1.Listing\"\x1d\x82\xd3\xe4\x93\x02\x17\x12\x15/v1/{name=listings}/*\x12}\n\rCreateListing\x12,.erepro.api.listings.v1.CreateListingRequest\x1a\x1f.erepro.api.listings.v1.Listing\"\x1d\x82\xd3\xe4\x93\x02\x17\"\x0c/v1/listings:\x07listing\x12\x8e\x01\n\rUpdateListing\x12,.erepro.api.listings.v1.UpdateListingRequest\x1a\x1f.erepro.api.listings.v1.Listing\".\x82\xd3\xe4\x93\x02(2\x1d/v1/{listing.name=listings/*}:\x07listing\x12}\n\rDeleteListing\x12,.erepro.api.listings.v1.DeleteListingRequest\x1a\x1f.erepro.api.listings.v1.Listing\"\x1d\x82\xd3\xe4\x93\x02\x17*\x15/v1/{name=listings/*}B@Z>github.com/eliaszs/erepro-apis/erepro/api/listings/v1;listingsb\x06proto3')
  ,
  dependencies=[google_dot_api_dot_annotations__pb2.DESCRIPTOR,google_dot_protobuf_dot_timestamp__pb2.DESCRIPTOR,google_dot_protobuf_dot_field__mask__pb2.DESCRIPTOR,])



_LISTINGOPERATION_OPERATIONTYPE = _descriptor.EnumDescriptor(
  name='OperationType',
  full_name='erepro.api.listings.v1.ListingOperation.OperationType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='OPERATION_TYPE_UNSPECIFIED', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CREATE', index=1, number=1,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=1189,
  serialized_end=1248,
)
_sym_db.RegisterEnumDescriptor(_LISTINGOPERATION_OPERATIONTYPE)


_LISTING = _descriptor.Descriptor(
  name='Listing',
  full_name='erepro.api.listings.v1.Listing',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='erepro.api.listings.v1.Listing.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='display_name', full_name='erepro.api.listings.v1.Listing.display_name', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='address', full_name='erepro.api.listings.v1.Listing.address', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='no_beds', full_name='erepro.api.listings.v1.Listing.no_beds', index=3,
      number=4, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='no_baths', full_name='erepro.api.listings.v1.Listing.no_baths', index=4,
      number=5, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='price', full_name='erepro.api.listings.v1.Listing.price', index=5,
      number=6, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='status', full_name='erepro.api.listings.v1.Listing.status', index=6,
      number=7, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='create_time', full_name='erepro.api.listings.v1.Listing.create_time', index=7,
      number=8, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='update_time', full_name='erepro.api.listings.v1.Listing.update_time', index=8,
      number=9, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='delete_time', full_name='erepro.api.listings.v1.Listing.delete_time', index=9,
      number=10, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=163,
  serialized_end=438,
)


_LISTLISTINGSREQUEST = _descriptor.Descriptor(
  name='ListListingsRequest',
  full_name='erepro.api.listings.v1.ListListingsRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='page_size', full_name='erepro.api.listings.v1.ListListingsRequest.page_size', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='page_token', full_name='erepro.api.listings.v1.ListListingsRequest.page_token', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='show_delete', full_name='erepro.api.listings.v1.ListListingsRequest.show_delete', index=2,
      number=3, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=440,
  serialized_end=521,
)


_LISTLISTINGSRESPONSE = _descriptor.Descriptor(
  name='ListListingsResponse',
  full_name='erepro.api.listings.v1.ListListingsResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='listings', full_name='erepro.api.listings.v1.ListListingsResponse.listings', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='next_page_token', full_name='erepro.api.listings.v1.ListListingsResponse.next_page_token', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=523,
  serialized_end=621,
)


_SEARCHLISTINGSREQUEST = _descriptor.Descriptor(
  name='SearchListingsRequest',
  full_name='erepro.api.listings.v1.SearchListingsRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='page_size', full_name='erepro.api.listings.v1.SearchListingsRequest.page_size', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='page_token', full_name='erepro.api.listings.v1.SearchListingsRequest.page_token', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='query', full_name='erepro.api.listings.v1.SearchListingsRequest.query', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=623,
  serialized_end=700,
)


_SEARCHLISTINGSRESPONSE = _descriptor.Descriptor(
  name='SearchListingsResponse',
  full_name='erepro.api.listings.v1.SearchListingsResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='listings', full_name='erepro.api.listings.v1.SearchListingsResponse.listings', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='next_page_token', full_name='erepro.api.listings.v1.SearchListingsResponse.next_page_token', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=702,
  serialized_end=802,
)


_GETLISTINGREQUEST = _descriptor.Descriptor(
  name='GetListingRequest',
  full_name='erepro.api.listings.v1.GetListingRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='erepro.api.listings.v1.GetListingRequest.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=804,
  serialized_end=837,
)


_CREATELISTINGREQUEST = _descriptor.Descriptor(
  name='CreateListingRequest',
  full_name='erepro.api.listings.v1.CreateListingRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='listing', full_name='erepro.api.listings.v1.CreateListingRequest.listing', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=839,
  serialized_end=911,
)


_UPDATELISTINGREQUEST = _descriptor.Descriptor(
  name='UpdateListingRequest',
  full_name='erepro.api.listings.v1.UpdateListingRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='listing', full_name='erepro.api.listings.v1.UpdateListingRequest.listing', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='update_mask', full_name='erepro.api.listings.v1.UpdateListingRequest.update_mask', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=913,
  serialized_end=1034,
)


_DELETELISTINGREQUEST = _descriptor.Descriptor(
  name='DeleteListingRequest',
  full_name='erepro.api.listings.v1.DeleteListingRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='erepro.api.listings.v1.DeleteListingRequest.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1036,
  serialized_end=1072,
)


_LISTINGOPERATION = _descriptor.Descriptor(
  name='ListingOperation',
  full_name='erepro.api.listings.v1.ListingOperation',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='erepro.api.listings.v1.ListingOperation.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='operation_type', full_name='erepro.api.listings.v1.ListingOperation.operation_type', index=1,
      number=2, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _LISTINGOPERATION_OPERATIONTYPE,
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1075,
  serialized_end=1248,
)

_LISTING.fields_by_name['create_time'].message_type = google_dot_protobuf_dot_timestamp__pb2._TIMESTAMP
_LISTING.fields_by_name['update_time'].message_type = google_dot_protobuf_dot_timestamp__pb2._TIMESTAMP
_LISTING.fields_by_name['delete_time'].message_type = google_dot_protobuf_dot_timestamp__pb2._TIMESTAMP
_LISTLISTINGSRESPONSE.fields_by_name['listings'].message_type = _LISTING
_SEARCHLISTINGSRESPONSE.fields_by_name['listings'].message_type = _LISTING
_CREATELISTINGREQUEST.fields_by_name['listing'].message_type = _LISTING
_UPDATELISTINGREQUEST.fields_by_name['listing'].message_type = _LISTING
_UPDATELISTINGREQUEST.fields_by_name['update_mask'].message_type = google_dot_protobuf_dot_field__mask__pb2._FIELDMASK
_LISTINGOPERATION.fields_by_name['operation_type'].enum_type = _LISTINGOPERATION_OPERATIONTYPE
_LISTINGOPERATION_OPERATIONTYPE.containing_type = _LISTINGOPERATION
DESCRIPTOR.message_types_by_name['Listing'] = _LISTING
DESCRIPTOR.message_types_by_name['ListListingsRequest'] = _LISTLISTINGSREQUEST
DESCRIPTOR.message_types_by_name['ListListingsResponse'] = _LISTLISTINGSRESPONSE
DESCRIPTOR.message_types_by_name['SearchListingsRequest'] = _SEARCHLISTINGSREQUEST
DESCRIPTOR.message_types_by_name['SearchListingsResponse'] = _SEARCHLISTINGSRESPONSE
DESCRIPTOR.message_types_by_name['GetListingRequest'] = _GETLISTINGREQUEST
DESCRIPTOR.message_types_by_name['CreateListingRequest'] = _CREATELISTINGREQUEST
DESCRIPTOR.message_types_by_name['UpdateListingRequest'] = _UPDATELISTINGREQUEST
DESCRIPTOR.message_types_by_name['DeleteListingRequest'] = _DELETELISTINGREQUEST
DESCRIPTOR.message_types_by_name['ListingOperation'] = _LISTINGOPERATION
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Listing = _reflection.GeneratedProtocolMessageType('Listing', (_message.Message,), dict(
  DESCRIPTOR = _LISTING,
  __module__ = 'erepro.api.listings.v1.listings_pb2'
  # @@protoc_insertion_point(class_scope:erepro.api.listings.v1.Listing)
  ))
_sym_db.RegisterMessage(Listing)

ListListingsRequest = _reflection.GeneratedProtocolMessageType('ListListingsRequest', (_message.Message,), dict(
  DESCRIPTOR = _LISTLISTINGSREQUEST,
  __module__ = 'erepro.api.listings.v1.listings_pb2'
  # @@protoc_insertion_point(class_scope:erepro.api.listings.v1.ListListingsRequest)
  ))
_sym_db.RegisterMessage(ListListingsRequest)

ListListingsResponse = _reflection.GeneratedProtocolMessageType('ListListingsResponse', (_message.Message,), dict(
  DESCRIPTOR = _LISTLISTINGSRESPONSE,
  __module__ = 'erepro.api.listings.v1.listings_pb2'
  # @@protoc_insertion_point(class_scope:erepro.api.listings.v1.ListListingsResponse)
  ))
_sym_db.RegisterMessage(ListListingsResponse)

SearchListingsRequest = _reflection.GeneratedProtocolMessageType('SearchListingsRequest', (_message.Message,), dict(
  DESCRIPTOR = _SEARCHLISTINGSREQUEST,
  __module__ = 'erepro.api.listings.v1.listings_pb2'
  # @@protoc_insertion_point(class_scope:erepro.api.listings.v1.SearchListingsRequest)
  ))
_sym_db.RegisterMessage(SearchListingsRequest)

SearchListingsResponse = _reflection.GeneratedProtocolMessageType('SearchListingsResponse', (_message.Message,), dict(
  DESCRIPTOR = _SEARCHLISTINGSRESPONSE,
  __module__ = 'erepro.api.listings.v1.listings_pb2'
  # @@protoc_insertion_point(class_scope:erepro.api.listings.v1.SearchListingsResponse)
  ))
_sym_db.RegisterMessage(SearchListingsResponse)

GetListingRequest = _reflection.GeneratedProtocolMessageType('GetListingRequest', (_message.Message,), dict(
  DESCRIPTOR = _GETLISTINGREQUEST,
  __module__ = 'erepro.api.listings.v1.listings_pb2'
  # @@protoc_insertion_point(class_scope:erepro.api.listings.v1.GetListingRequest)
  ))
_sym_db.RegisterMessage(GetListingRequest)

CreateListingRequest = _reflection.GeneratedProtocolMessageType('CreateListingRequest', (_message.Message,), dict(
  DESCRIPTOR = _CREATELISTINGREQUEST,
  __module__ = 'erepro.api.listings.v1.listings_pb2'
  # @@protoc_insertion_point(class_scope:erepro.api.listings.v1.CreateListingRequest)
  ))
_sym_db.RegisterMessage(CreateListingRequest)

UpdateListingRequest = _reflection.GeneratedProtocolMessageType('UpdateListingRequest', (_message.Message,), dict(
  DESCRIPTOR = _UPDATELISTINGREQUEST,
  __module__ = 'erepro.api.listings.v1.listings_pb2'
  # @@protoc_insertion_point(class_scope:erepro.api.listings.v1.UpdateListingRequest)
  ))
_sym_db.RegisterMessage(UpdateListingRequest)

DeleteListingRequest = _reflection.GeneratedProtocolMessageType('DeleteListingRequest', (_message.Message,), dict(
  DESCRIPTOR = _DELETELISTINGREQUEST,
  __module__ = 'erepro.api.listings.v1.listings_pb2'
  # @@protoc_insertion_point(class_scope:erepro.api.listings.v1.DeleteListingRequest)
  ))
_sym_db.RegisterMessage(DeleteListingRequest)

ListingOperation = _reflection.GeneratedProtocolMessageType('ListingOperation', (_message.Message,), dict(
  DESCRIPTOR = _LISTINGOPERATION,
  __module__ = 'erepro.api.listings.v1.listings_pb2'
  # @@protoc_insertion_point(class_scope:erepro.api.listings.v1.ListingOperation)
  ))
_sym_db.RegisterMessage(ListingOperation)


DESCRIPTOR._options = None

_LISTINGS = _descriptor.ServiceDescriptor(
  name='Listings',
  full_name='erepro.api.listings.v1.Listings',
  file=DESCRIPTOR,
  index=0,
  serialized_options=None,
  serialized_start=1251,
  serialized_end=2056,
  methods=[
  _descriptor.MethodDescriptor(
    name='ListListings',
    full_name='erepro.api.listings.v1.Listings.ListListings',
    index=0,
    containing_service=None,
    input_type=_LISTLISTINGSREQUEST,
    output_type=_LISTLISTINGSRESPONSE,
    serialized_options=_b('\202\323\344\223\002\016\022\014/v1/listings'),
  ),
  _descriptor.MethodDescriptor(
    name='SearchListings',
    full_name='erepro.api.listings.v1.Listings.SearchListings',
    index=1,
    containing_service=None,
    input_type=_SEARCHLISTINGSREQUEST,
    output_type=_SEARCHLISTINGSRESPONSE,
    serialized_options=_b('\202\323\344\223\002\030\"\023/v1/listings:search:\001*'),
  ),
  _descriptor.MethodDescriptor(
    name='GetListing',
    full_name='erepro.api.listings.v1.Listings.GetListing',
    index=2,
    containing_service=None,
    input_type=_GETLISTINGREQUEST,
    output_type=_LISTING,
    serialized_options=_b('\202\323\344\223\002\027\022\025/v1/{name=listings}/*'),
  ),
  _descriptor.MethodDescriptor(
    name='CreateListing',
    full_name='erepro.api.listings.v1.Listings.CreateListing',
    index=3,
    containing_service=None,
    input_type=_CREATELISTINGREQUEST,
    output_type=_LISTING,
    serialized_options=_b('\202\323\344\223\002\027\"\014/v1/listings:\007listing'),
  ),
  _descriptor.MethodDescriptor(
    name='UpdateListing',
    full_name='erepro.api.listings.v1.Listings.UpdateListing',
    index=4,
    containing_service=None,
    input_type=_UPDATELISTINGREQUEST,
    output_type=_LISTING,
    serialized_options=_b('\202\323\344\223\002(2\035/v1/{listing.name=listings/*}:\007listing'),
  ),
  _descriptor.MethodDescriptor(
    name='DeleteListing',
    full_name='erepro.api.listings.v1.Listings.DeleteListing',
    index=5,
    containing_service=None,
    input_type=_DELETELISTINGREQUEST,
    output_type=_LISTING,
    serialized_options=_b('\202\323\344\223\002\027*\025/v1/{name=listings/*}'),
  ),
])
_sym_db.RegisterServiceDescriptor(_LISTINGS)

DESCRIPTOR.services_by_name['Listings'] = _LISTINGS

# @@protoc_insertion_point(module_scope)
