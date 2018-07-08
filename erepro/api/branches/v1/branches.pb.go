// Code generated by protoc-gen-go. DO NOT EDIT.
// source: erepro/api/branches/v1/branches.proto

package branches // import "github.com/eliaszs/erepro-apis/erepro/api/branches/v1"

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"
import timestamp "github.com/golang/protobuf/ptypes/timestamp"
import _ "google.golang.org/genproto/googleapis/api/annotations"
import field_mask "google.golang.org/genproto/protobuf/field_mask"

import (
	context "golang.org/x/net/context"
	grpc "google.golang.org/grpc"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion2 // please upgrade the proto package

type BrancheOperation_OperationType int32

const (
	BrancheOperation_OPERATION_TYPE_UNSPECIFIED BrancheOperation_OperationType = 0
	BrancheOperation_CREATE                     BrancheOperation_OperationType = 1
)

var BrancheOperation_OperationType_name = map[int32]string{
	0: "OPERATION_TYPE_UNSPECIFIED",
	1: "CREATE",
}
var BrancheOperation_OperationType_value = map[string]int32{
	"OPERATION_TYPE_UNSPECIFIED": 0,
	"CREATE":                     1,
}

func (x BrancheOperation_OperationType) String() string {
	return proto.EnumName(BrancheOperation_OperationType_name, int32(x))
}
func (BrancheOperation_OperationType) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_branches_92933ae10984269f, []int{9, 0}
}

type Branch struct {
	Name                 string               `protobuf:"bytes,1,opt,name=name" json:"name,omitempty"`
	DisplayName          string               `protobuf:"bytes,2,opt,name=display_name,json=displayName" json:"display_name,omitempty"`
	Address              string               `protobuf:"bytes,3,opt,name=address" json:"address,omitempty"`
	NoBeds               uint32               `protobuf:"varint,4,opt,name=no_beds,json=noBeds" json:"no_beds,omitempty"`
	NoBaths              uint32               `protobuf:"varint,5,opt,name=no_baths,json=noBaths" json:"no_baths,omitempty"`
	Price                uint64               `protobuf:"varint,6,opt,name=price" json:"price,omitempty"`
	CreateTime           *timestamp.Timestamp `protobuf:"bytes,7,opt,name=create_time,json=createTime" json:"create_time,omitempty"`
	UpdateTime           *timestamp.Timestamp `protobuf:"bytes,8,opt,name=update_time,json=updateTime" json:"update_time,omitempty"`
	XXX_NoUnkeyedLiteral struct{}             `json:"-"`
	XXX_unrecognized     []byte               `json:"-"`
	XXX_sizecache        int32                `json:"-"`
}

func (m *Branch) Reset()         { *m = Branch{} }
func (m *Branch) String() string { return proto.CompactTextString(m) }
func (*Branch) ProtoMessage()    {}
func (*Branch) Descriptor() ([]byte, []int) {
	return fileDescriptor_branches_92933ae10984269f, []int{0}
}
func (m *Branch) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Branch.Unmarshal(m, b)
}
func (m *Branch) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Branch.Marshal(b, m, deterministic)
}
func (dst *Branch) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Branch.Merge(dst, src)
}
func (m *Branch) XXX_Size() int {
	return xxx_messageInfo_Branch.Size(m)
}
func (m *Branch) XXX_DiscardUnknown() {
	xxx_messageInfo_Branch.DiscardUnknown(m)
}

var xxx_messageInfo_Branch proto.InternalMessageInfo

func (m *Branch) GetName() string {
	if m != nil {
		return m.Name
	}
	return ""
}

func (m *Branch) GetDisplayName() string {
	if m != nil {
		return m.DisplayName
	}
	return ""
}

func (m *Branch) GetAddress() string {
	if m != nil {
		return m.Address
	}
	return ""
}

func (m *Branch) GetNoBeds() uint32 {
	if m != nil {
		return m.NoBeds
	}
	return 0
}

func (m *Branch) GetNoBaths() uint32 {
	if m != nil {
		return m.NoBaths
	}
	return 0
}

func (m *Branch) GetPrice() uint64 {
	if m != nil {
		return m.Price
	}
	return 0
}

func (m *Branch) GetCreateTime() *timestamp.Timestamp {
	if m != nil {
		return m.CreateTime
	}
	return nil
}

func (m *Branch) GetUpdateTime() *timestamp.Timestamp {
	if m != nil {
		return m.UpdateTime
	}
	return nil
}

type ListBranchesRequest struct {
	PageSize             int32    `protobuf:"varint,1,opt,name=page_size,json=pageSize" json:"page_size,omitempty"`
	PageToken            string   `protobuf:"bytes,2,opt,name=page_token,json=pageToken" json:"page_token,omitempty"`
	ShowDelete           bool     `protobuf:"varint,3,opt,name=show_delete,json=showDelete" json:"show_delete,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *ListBranchesRequest) Reset()         { *m = ListBranchesRequest{} }
func (m *ListBranchesRequest) String() string { return proto.CompactTextString(m) }
func (*ListBranchesRequest) ProtoMessage()    {}
func (*ListBranchesRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_branches_92933ae10984269f, []int{1}
}
func (m *ListBranchesRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_ListBranchesRequest.Unmarshal(m, b)
}
func (m *ListBranchesRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_ListBranchesRequest.Marshal(b, m, deterministic)
}
func (dst *ListBranchesRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_ListBranchesRequest.Merge(dst, src)
}
func (m *ListBranchesRequest) XXX_Size() int {
	return xxx_messageInfo_ListBranchesRequest.Size(m)
}
func (m *ListBranchesRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_ListBranchesRequest.DiscardUnknown(m)
}

var xxx_messageInfo_ListBranchesRequest proto.InternalMessageInfo

func (m *ListBranchesRequest) GetPageSize() int32 {
	if m != nil {
		return m.PageSize
	}
	return 0
}

func (m *ListBranchesRequest) GetPageToken() string {
	if m != nil {
		return m.PageToken
	}
	return ""
}

func (m *ListBranchesRequest) GetShowDelete() bool {
	if m != nil {
		return m.ShowDelete
	}
	return false
}

type ListBranchesResponse struct {
	Branches             []*Branch `protobuf:"bytes,1,rep,name=branches" json:"branches,omitempty"`
	NextPageToken        string    `protobuf:"bytes,2,opt,name=next_page_token,json=nextPageToken" json:"next_page_token,omitempty"`
	XXX_NoUnkeyedLiteral struct{}  `json:"-"`
	XXX_unrecognized     []byte    `json:"-"`
	XXX_sizecache        int32     `json:"-"`
}

func (m *ListBranchesResponse) Reset()         { *m = ListBranchesResponse{} }
func (m *ListBranchesResponse) String() string { return proto.CompactTextString(m) }
func (*ListBranchesResponse) ProtoMessage()    {}
func (*ListBranchesResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_branches_92933ae10984269f, []int{2}
}
func (m *ListBranchesResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_ListBranchesResponse.Unmarshal(m, b)
}
func (m *ListBranchesResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_ListBranchesResponse.Marshal(b, m, deterministic)
}
func (dst *ListBranchesResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_ListBranchesResponse.Merge(dst, src)
}
func (m *ListBranchesResponse) XXX_Size() int {
	return xxx_messageInfo_ListBranchesResponse.Size(m)
}
func (m *ListBranchesResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_ListBranchesResponse.DiscardUnknown(m)
}

var xxx_messageInfo_ListBranchesResponse proto.InternalMessageInfo

func (m *ListBranchesResponse) GetBranches() []*Branch {
	if m != nil {
		return m.Branches
	}
	return nil
}

func (m *ListBranchesResponse) GetNextPageToken() string {
	if m != nil {
		return m.NextPageToken
	}
	return ""
}

type SearchBranchesRequest struct {
	PageSize             int32    `protobuf:"varint,1,opt,name=page_size,json=pageSize" json:"page_size,omitempty"`
	PageToken            string   `protobuf:"bytes,2,opt,name=page_token,json=pageToken" json:"page_token,omitempty"`
	Query                string   `protobuf:"bytes,3,opt,name=query" json:"query,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *SearchBranchesRequest) Reset()         { *m = SearchBranchesRequest{} }
func (m *SearchBranchesRequest) String() string { return proto.CompactTextString(m) }
func (*SearchBranchesRequest) ProtoMessage()    {}
func (*SearchBranchesRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_branches_92933ae10984269f, []int{3}
}
func (m *SearchBranchesRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_SearchBranchesRequest.Unmarshal(m, b)
}
func (m *SearchBranchesRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_SearchBranchesRequest.Marshal(b, m, deterministic)
}
func (dst *SearchBranchesRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_SearchBranchesRequest.Merge(dst, src)
}
func (m *SearchBranchesRequest) XXX_Size() int {
	return xxx_messageInfo_SearchBranchesRequest.Size(m)
}
func (m *SearchBranchesRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_SearchBranchesRequest.DiscardUnknown(m)
}

var xxx_messageInfo_SearchBranchesRequest proto.InternalMessageInfo

func (m *SearchBranchesRequest) GetPageSize() int32 {
	if m != nil {
		return m.PageSize
	}
	return 0
}

func (m *SearchBranchesRequest) GetPageToken() string {
	if m != nil {
		return m.PageToken
	}
	return ""
}

func (m *SearchBranchesRequest) GetQuery() string {
	if m != nil {
		return m.Query
	}
	return ""
}

type SearchBranchesResponse struct {
	Branches             []*Branch `protobuf:"bytes,1,rep,name=branches" json:"branches,omitempty"`
	NextPageToken        string    `protobuf:"bytes,2,opt,name=next_page_token,json=nextPageToken" json:"next_page_token,omitempty"`
	XXX_NoUnkeyedLiteral struct{}  `json:"-"`
	XXX_unrecognized     []byte    `json:"-"`
	XXX_sizecache        int32     `json:"-"`
}

func (m *SearchBranchesResponse) Reset()         { *m = SearchBranchesResponse{} }
func (m *SearchBranchesResponse) String() string { return proto.CompactTextString(m) }
func (*SearchBranchesResponse) ProtoMessage()    {}
func (*SearchBranchesResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_branches_92933ae10984269f, []int{4}
}
func (m *SearchBranchesResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_SearchBranchesResponse.Unmarshal(m, b)
}
func (m *SearchBranchesResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_SearchBranchesResponse.Marshal(b, m, deterministic)
}
func (dst *SearchBranchesResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_SearchBranchesResponse.Merge(dst, src)
}
func (m *SearchBranchesResponse) XXX_Size() int {
	return xxx_messageInfo_SearchBranchesResponse.Size(m)
}
func (m *SearchBranchesResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_SearchBranchesResponse.DiscardUnknown(m)
}

var xxx_messageInfo_SearchBranchesResponse proto.InternalMessageInfo

func (m *SearchBranchesResponse) GetBranches() []*Branch {
	if m != nil {
		return m.Branches
	}
	return nil
}

func (m *SearchBranchesResponse) GetNextPageToken() string {
	if m != nil {
		return m.NextPageToken
	}
	return ""
}

type GetBranchRequest struct {
	Name                 string   `protobuf:"bytes,1,opt,name=name" json:"name,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *GetBranchRequest) Reset()         { *m = GetBranchRequest{} }
func (m *GetBranchRequest) String() string { return proto.CompactTextString(m) }
func (*GetBranchRequest) ProtoMessage()    {}
func (*GetBranchRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_branches_92933ae10984269f, []int{5}
}
func (m *GetBranchRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_GetBranchRequest.Unmarshal(m, b)
}
func (m *GetBranchRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_GetBranchRequest.Marshal(b, m, deterministic)
}
func (dst *GetBranchRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_GetBranchRequest.Merge(dst, src)
}
func (m *GetBranchRequest) XXX_Size() int {
	return xxx_messageInfo_GetBranchRequest.Size(m)
}
func (m *GetBranchRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_GetBranchRequest.DiscardUnknown(m)
}

var xxx_messageInfo_GetBranchRequest proto.InternalMessageInfo

func (m *GetBranchRequest) GetName() string {
	if m != nil {
		return m.Name
	}
	return ""
}

type CreateBranchRequest struct {
	Branch               *Branch  `protobuf:"bytes,1,opt,name=branch" json:"branch,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *CreateBranchRequest) Reset()         { *m = CreateBranchRequest{} }
func (m *CreateBranchRequest) String() string { return proto.CompactTextString(m) }
func (*CreateBranchRequest) ProtoMessage()    {}
func (*CreateBranchRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_branches_92933ae10984269f, []int{6}
}
func (m *CreateBranchRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_CreateBranchRequest.Unmarshal(m, b)
}
func (m *CreateBranchRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_CreateBranchRequest.Marshal(b, m, deterministic)
}
func (dst *CreateBranchRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_CreateBranchRequest.Merge(dst, src)
}
func (m *CreateBranchRequest) XXX_Size() int {
	return xxx_messageInfo_CreateBranchRequest.Size(m)
}
func (m *CreateBranchRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_CreateBranchRequest.DiscardUnknown(m)
}

var xxx_messageInfo_CreateBranchRequest proto.InternalMessageInfo

func (m *CreateBranchRequest) GetBranch() *Branch {
	if m != nil {
		return m.Branch
	}
	return nil
}

type UpdateBranchRequest struct {
	Branch               *Branch               `protobuf:"bytes,1,opt,name=branch" json:"branch,omitempty"`
	UpdateMask           *field_mask.FieldMask `protobuf:"bytes,2,opt,name=update_mask,json=updateMask" json:"update_mask,omitempty"`
	XXX_NoUnkeyedLiteral struct{}              `json:"-"`
	XXX_unrecognized     []byte                `json:"-"`
	XXX_sizecache        int32                 `json:"-"`
}

func (m *UpdateBranchRequest) Reset()         { *m = UpdateBranchRequest{} }
func (m *UpdateBranchRequest) String() string { return proto.CompactTextString(m) }
func (*UpdateBranchRequest) ProtoMessage()    {}
func (*UpdateBranchRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_branches_92933ae10984269f, []int{7}
}
func (m *UpdateBranchRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_UpdateBranchRequest.Unmarshal(m, b)
}
func (m *UpdateBranchRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_UpdateBranchRequest.Marshal(b, m, deterministic)
}
func (dst *UpdateBranchRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_UpdateBranchRequest.Merge(dst, src)
}
func (m *UpdateBranchRequest) XXX_Size() int {
	return xxx_messageInfo_UpdateBranchRequest.Size(m)
}
func (m *UpdateBranchRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_UpdateBranchRequest.DiscardUnknown(m)
}

var xxx_messageInfo_UpdateBranchRequest proto.InternalMessageInfo

func (m *UpdateBranchRequest) GetBranch() *Branch {
	if m != nil {
		return m.Branch
	}
	return nil
}

func (m *UpdateBranchRequest) GetUpdateMask() *field_mask.FieldMask {
	if m != nil {
		return m.UpdateMask
	}
	return nil
}

type DeleteBranchRequest struct {
	Name                 string   `protobuf:"bytes,1,opt,name=name" json:"name,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *DeleteBranchRequest) Reset()         { *m = DeleteBranchRequest{} }
func (m *DeleteBranchRequest) String() string { return proto.CompactTextString(m) }
func (*DeleteBranchRequest) ProtoMessage()    {}
func (*DeleteBranchRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_branches_92933ae10984269f, []int{8}
}
func (m *DeleteBranchRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_DeleteBranchRequest.Unmarshal(m, b)
}
func (m *DeleteBranchRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_DeleteBranchRequest.Marshal(b, m, deterministic)
}
func (dst *DeleteBranchRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_DeleteBranchRequest.Merge(dst, src)
}
func (m *DeleteBranchRequest) XXX_Size() int {
	return xxx_messageInfo_DeleteBranchRequest.Size(m)
}
func (m *DeleteBranchRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_DeleteBranchRequest.DiscardUnknown(m)
}

var xxx_messageInfo_DeleteBranchRequest proto.InternalMessageInfo

func (m *DeleteBranchRequest) GetName() string {
	if m != nil {
		return m.Name
	}
	return ""
}

type BrancheOperation struct {
	Name                 string                         `protobuf:"bytes,1,opt,name=name" json:"name,omitempty"`
	OperationType        BrancheOperation_OperationType `protobuf:"varint,2,opt,name=operation_type,json=operationType,enum=erepro.api.branches.v1.BrancheOperation_OperationType" json:"operation_type,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                       `json:"-"`
	XXX_unrecognized     []byte                         `json:"-"`
	XXX_sizecache        int32                          `json:"-"`
}

func (m *BrancheOperation) Reset()         { *m = BrancheOperation{} }
func (m *BrancheOperation) String() string { return proto.CompactTextString(m) }
func (*BrancheOperation) ProtoMessage()    {}
func (*BrancheOperation) Descriptor() ([]byte, []int) {
	return fileDescriptor_branches_92933ae10984269f, []int{9}
}
func (m *BrancheOperation) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_BrancheOperation.Unmarshal(m, b)
}
func (m *BrancheOperation) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_BrancheOperation.Marshal(b, m, deterministic)
}
func (dst *BrancheOperation) XXX_Merge(src proto.Message) {
	xxx_messageInfo_BrancheOperation.Merge(dst, src)
}
func (m *BrancheOperation) XXX_Size() int {
	return xxx_messageInfo_BrancheOperation.Size(m)
}
func (m *BrancheOperation) XXX_DiscardUnknown() {
	xxx_messageInfo_BrancheOperation.DiscardUnknown(m)
}

var xxx_messageInfo_BrancheOperation proto.InternalMessageInfo

func (m *BrancheOperation) GetName() string {
	if m != nil {
		return m.Name
	}
	return ""
}

func (m *BrancheOperation) GetOperationType() BrancheOperation_OperationType {
	if m != nil {
		return m.OperationType
	}
	return BrancheOperation_OPERATION_TYPE_UNSPECIFIED
}

func init() {
	proto.RegisterType((*Branch)(nil), "erepro.api.branches.v1.Branch")
	proto.RegisterType((*ListBranchesRequest)(nil), "erepro.api.branches.v1.ListBranchesRequest")
	proto.RegisterType((*ListBranchesResponse)(nil), "erepro.api.branches.v1.ListBranchesResponse")
	proto.RegisterType((*SearchBranchesRequest)(nil), "erepro.api.branches.v1.SearchBranchesRequest")
	proto.RegisterType((*SearchBranchesResponse)(nil), "erepro.api.branches.v1.SearchBranchesResponse")
	proto.RegisterType((*GetBranchRequest)(nil), "erepro.api.branches.v1.GetBranchRequest")
	proto.RegisterType((*CreateBranchRequest)(nil), "erepro.api.branches.v1.CreateBranchRequest")
	proto.RegisterType((*UpdateBranchRequest)(nil), "erepro.api.branches.v1.UpdateBranchRequest")
	proto.RegisterType((*DeleteBranchRequest)(nil), "erepro.api.branches.v1.DeleteBranchRequest")
	proto.RegisterType((*BrancheOperation)(nil), "erepro.api.branches.v1.BrancheOperation")
	proto.RegisterEnum("erepro.api.branches.v1.BrancheOperation_OperationType", BrancheOperation_OperationType_name, BrancheOperation_OperationType_value)
}

// Reference imports to suppress errors if they are not otherwise used.
var _ context.Context
var _ grpc.ClientConn

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
const _ = grpc.SupportPackageIsVersion4

// BranchesClient is the client API for Branches service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
type BranchesClient interface {
	// List the availalbe Branches
	ListBranches(ctx context.Context, in *ListBranchesRequest, opts ...grpc.CallOption) (*ListBranchesResponse, error)
	// Search for Branches that match specific filter criteria.
	SearchBranches(ctx context.Context, in *SearchBranchesRequest, opts ...grpc.CallOption) (*SearchBranchesResponse, error)
	// Retrives a branch identified by the supplied branch name
	GetBranch(ctx context.Context, in *GetBranchRequest, opts ...grpc.CallOption) (*Branch, error)
	// Create a Branch in the database
	CreateBranch(ctx context.Context, in *CreateBranchRequest, opts ...grpc.CallOption) (*Branch, error)
	// Update a branch
	UpdateBranch(ctx context.Context, in *UpdateBranchRequest, opts ...grpc.CallOption) (*Branch, error)
	// Delete a branch
	DeleteBranch(ctx context.Context, in *DeleteBranchRequest, opts ...grpc.CallOption) (*Branch, error)
}

type branchesClient struct {
	cc *grpc.ClientConn
}

func NewBranchesClient(cc *grpc.ClientConn) BranchesClient {
	return &branchesClient{cc}
}

func (c *branchesClient) ListBranches(ctx context.Context, in *ListBranchesRequest, opts ...grpc.CallOption) (*ListBranchesResponse, error) {
	out := new(ListBranchesResponse)
	err := c.cc.Invoke(ctx, "/erepro.api.branches.v1.Branches/ListBranches", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *branchesClient) SearchBranches(ctx context.Context, in *SearchBranchesRequest, opts ...grpc.CallOption) (*SearchBranchesResponse, error) {
	out := new(SearchBranchesResponse)
	err := c.cc.Invoke(ctx, "/erepro.api.branches.v1.Branches/SearchBranches", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *branchesClient) GetBranch(ctx context.Context, in *GetBranchRequest, opts ...grpc.CallOption) (*Branch, error) {
	out := new(Branch)
	err := c.cc.Invoke(ctx, "/erepro.api.branches.v1.Branches/GetBranch", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *branchesClient) CreateBranch(ctx context.Context, in *CreateBranchRequest, opts ...grpc.CallOption) (*Branch, error) {
	out := new(Branch)
	err := c.cc.Invoke(ctx, "/erepro.api.branches.v1.Branches/CreateBranch", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *branchesClient) UpdateBranch(ctx context.Context, in *UpdateBranchRequest, opts ...grpc.CallOption) (*Branch, error) {
	out := new(Branch)
	err := c.cc.Invoke(ctx, "/erepro.api.branches.v1.Branches/UpdateBranch", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *branchesClient) DeleteBranch(ctx context.Context, in *DeleteBranchRequest, opts ...grpc.CallOption) (*Branch, error) {
	out := new(Branch)
	err := c.cc.Invoke(ctx, "/erepro.api.branches.v1.Branches/DeleteBranch", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// BranchesServer is the server API for Branches service.
type BranchesServer interface {
	// List the availalbe Branches
	ListBranches(context.Context, *ListBranchesRequest) (*ListBranchesResponse, error)
	// Search for Branches that match specific filter criteria.
	SearchBranches(context.Context, *SearchBranchesRequest) (*SearchBranchesResponse, error)
	// Retrives a branch identified by the supplied branch name
	GetBranch(context.Context, *GetBranchRequest) (*Branch, error)
	// Create a Branch in the database
	CreateBranch(context.Context, *CreateBranchRequest) (*Branch, error)
	// Update a branch
	UpdateBranch(context.Context, *UpdateBranchRequest) (*Branch, error)
	// Delete a branch
	DeleteBranch(context.Context, *DeleteBranchRequest) (*Branch, error)
}

func RegisterBranchesServer(s *grpc.Server, srv BranchesServer) {
	s.RegisterService(&_Branches_serviceDesc, srv)
}

func _Branches_ListBranches_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(ListBranchesRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(BranchesServer).ListBranches(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/erepro.api.branches.v1.Branches/ListBranches",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(BranchesServer).ListBranches(ctx, req.(*ListBranchesRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _Branches_SearchBranches_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(SearchBranchesRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(BranchesServer).SearchBranches(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/erepro.api.branches.v1.Branches/SearchBranches",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(BranchesServer).SearchBranches(ctx, req.(*SearchBranchesRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _Branches_GetBranch_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(GetBranchRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(BranchesServer).GetBranch(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/erepro.api.branches.v1.Branches/GetBranch",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(BranchesServer).GetBranch(ctx, req.(*GetBranchRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _Branches_CreateBranch_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(CreateBranchRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(BranchesServer).CreateBranch(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/erepro.api.branches.v1.Branches/CreateBranch",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(BranchesServer).CreateBranch(ctx, req.(*CreateBranchRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _Branches_UpdateBranch_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(UpdateBranchRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(BranchesServer).UpdateBranch(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/erepro.api.branches.v1.Branches/UpdateBranch",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(BranchesServer).UpdateBranch(ctx, req.(*UpdateBranchRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _Branches_DeleteBranch_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(DeleteBranchRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(BranchesServer).DeleteBranch(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/erepro.api.branches.v1.Branches/DeleteBranch",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(BranchesServer).DeleteBranch(ctx, req.(*DeleteBranchRequest))
	}
	return interceptor(ctx, in, info, handler)
}

var _Branches_serviceDesc = grpc.ServiceDesc{
	ServiceName: "erepro.api.branches.v1.Branches",
	HandlerType: (*BranchesServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "ListBranches",
			Handler:    _Branches_ListBranches_Handler,
		},
		{
			MethodName: "SearchBranches",
			Handler:    _Branches_SearchBranches_Handler,
		},
		{
			MethodName: "GetBranch",
			Handler:    _Branches_GetBranch_Handler,
		},
		{
			MethodName: "CreateBranch",
			Handler:    _Branches_CreateBranch_Handler,
		},
		{
			MethodName: "UpdateBranch",
			Handler:    _Branches_UpdateBranch_Handler,
		},
		{
			MethodName: "DeleteBranch",
			Handler:    _Branches_DeleteBranch_Handler,
		},
	},
	Streams:  []grpc.StreamDesc{},
	Metadata: "erepro/api/branches/v1/branches.proto",
}

func init() {
	proto.RegisterFile("erepro/api/branches/v1/branches.proto", fileDescriptor_branches_92933ae10984269f)
}

var fileDescriptor_branches_92933ae10984269f = []byte{
	// 823 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xbc, 0x56, 0xcb, 0x6e, 0xf3, 0x44,
	0x14, 0xc6, 0x6d, 0x73, 0xe9, 0xc9, 0x85, 0x68, 0x92, 0xb6, 0x26, 0xf4, 0x12, 0x2c, 0x51, 0x85,
	0xd2, 0x3a, 0x6a, 0x90, 0xba, 0x48, 0x05, 0xa2, 0x69, 0x53, 0x54, 0x89, 0xb6, 0x91, 0x9b, 0x2e,
	0x40, 0x42, 0xd6, 0x24, 0x9e, 0x26, 0x56, 0x13, 0x8f, 0xeb, 0x71, 0x0a, 0x09, 0x20, 0x24, 0x76,
	0xb0, 0x61, 0x81, 0xc4, 0x8e, 0x97, 0xe1, 0x15, 0x78, 0x05, 0x1e, 0x04, 0xcd, 0xf8, 0x82, 0x13,
	0x9c, 0x3f, 0x5d, 0x54, 0xff, 0x6e, 0xe6, 0x9c, 0xef, 0xcc, 0xb9, 0xcc, 0xf7, 0x8d, 0x0d, 0x1f,
	0x12, 0x87, 0xd8, 0x0e, 0xad, 0x61, 0xdb, 0xac, 0x75, 0x1d, 0x6c, 0xf5, 0x06, 0x84, 0xd5, 0x9e,
	0x8f, 0xc3, 0xb5, 0x6a, 0x3b, 0xd4, 0xa5, 0x68, 0xd3, 0x83, 0xa9, 0xd8, 0x36, 0xd5, 0xd0, 0xf5,
	0x7c, 0x5c, 0xde, 0xee, 0x53, 0xda, 0x1f, 0x12, 0x11, 0x8e, 0x2d, 0x8b, 0xba, 0xd8, 0x35, 0xa9,
	0xe5, 0x47, 0x95, 0xf7, 0x7c, 0xaf, 0xd8, 0x75, 0xc7, 0x0f, 0x35, 0xd7, 0x1c, 0x11, 0xe6, 0xe2,
	0x91, 0xed, 0x03, 0x2a, 0xf3, 0x80, 0x07, 0x93, 0x0c, 0x0d, 0x7d, 0x84, 0xd9, 0xa3, 0x87, 0x50,
	0xfe, 0x5c, 0x81, 0x64, 0x53, 0x24, 0x44, 0x08, 0xd6, 0x2c, 0x3c, 0x22, 0xb2, 0x54, 0x91, 0xaa,
	0xeb, 0x9a, 0x58, 0xa3, 0x0f, 0x20, 0x6b, 0x98, 0xcc, 0x1e, 0xe2, 0x89, 0x2e, 0x7c, 0x2b, 0xc2,
	0x97, 0xf1, 0x6d, 0x37, 0x1c, 0x22, 0x43, 0x0a, 0x1b, 0x86, 0x43, 0x18, 0x93, 0x57, 0x85, 0x37,
	0xd8, 0xa2, 0x2d, 0x48, 0x59, 0x54, 0xef, 0x12, 0x83, 0xc9, 0x6b, 0x15, 0xa9, 0x9a, 0xd3, 0x92,
	0x16, 0x6d, 0x12, 0x83, 0xa1, 0xf7, 0x20, 0xcd, 0x1d, 0xd8, 0x1d, 0x30, 0x39, 0x21, 0x3c, 0x29,
	0x8b, 0x36, 0xf9, 0x16, 0x95, 0x20, 0x61, 0x3b, 0x66, 0x8f, 0xc8, 0xc9, 0x8a, 0x54, 0x5d, 0xd3,
	0xbc, 0x0d, 0x3a, 0x85, 0x4c, 0xcf, 0x21, 0xd8, 0x25, 0x3a, 0xef, 0x50, 0x4e, 0x55, 0xa4, 0x6a,
	0xa6, 0x5e, 0x56, 0xbd, 0xee, 0xd4, 0xa0, 0x3b, 0xb5, 0x13, 0xb4, 0xaf, 0x81, 0x07, 0xe7, 0x06,
	0x1e, 0x3c, 0xb6, 0x8d, 0x30, 0x38, 0xbd, 0x3c, 0xd8, 0x83, 0x73, 0x83, 0xe2, 0x40, 0xf1, 0x4b,
	0x93, 0xb9, 0x4d, 0xff, 0x4e, 0x34, 0xf2, 0x34, 0x26, 0xcc, 0x45, 0xef, 0xc3, 0xba, 0x8d, 0xfb,
	0x44, 0x67, 0xe6, 0xd4, 0x1b, 0x58, 0x42, 0x4b, 0x73, 0xc3, 0x9d, 0x39, 0x25, 0x68, 0x07, 0x40,
	0x38, 0x5d, 0xfa, 0x48, 0x2c, 0x7f, 0x64, 0x02, 0xde, 0xe1, 0x06, 0xb4, 0x07, 0x19, 0x36, 0xa0,
	0xdf, 0xea, 0x06, 0x19, 0x12, 0x97, 0x88, 0xa1, 0xa5, 0x35, 0xe0, 0xa6, 0x0b, 0x61, 0x51, 0xa6,
	0x50, 0x9a, 0xcd, 0xc9, 0x6c, 0x6a, 0x31, 0x82, 0x1a, 0x90, 0x0e, 0xb8, 0x21, 0x4b, 0x95, 0xd5,
	0x6a, 0xa6, 0xbe, 0xab, 0xc6, 0xf3, 0x46, 0xf5, 0x62, 0xb5, 0x10, 0x8f, 0xf6, 0xe1, 0x5d, 0x8b,
	0x7c, 0xe7, 0xea, 0xff, 0x2b, 0x2c, 0xc7, 0xcd, 0xed, 0xa0, 0x38, 0xc5, 0x84, 0x8d, 0x3b, 0x82,
	0x9d, 0xde, 0xe0, 0x35, 0x3b, 0x2e, 0x41, 0xe2, 0x69, 0x4c, 0x9c, 0x89, 0x4f, 0x10, 0x6f, 0xa3,
	0xfc, 0x00, 0x9b, 0xf3, 0xa9, 0xde, 0x62, 0xa3, 0xfb, 0x50, 0xf8, 0x82, 0xf8, 0x33, 0x0e, 0x7a,
	0x8c, 0x51, 0x80, 0x72, 0x0d, 0xc5, 0x73, 0xc1, 0xa5, 0x59, 0xe8, 0x09, 0x24, 0xbd, 0x94, 0x02,
	0xbc, 0xbc, 0x40, 0x1f, 0xad, 0xfc, 0x2a, 0x41, 0xf1, 0x5e, 0xd0, 0xeb, 0x55, 0xce, 0x8b, 0x90,
	0x9b, 0x8b, 0x5a, 0xb4, 0x1a, 0x47, 0xee, 0x4b, 0xae, 0xfb, 0x6b, 0xcc, 0x1e, 0x03, 0x72, 0xf3,
	0xb5, 0xf2, 0x11, 0x14, 0x3d, 0xca, 0x2d, 0x1f, 0xc3, 0x5f, 0x12, 0x14, 0xfc, 0x7b, 0xba, 0xb5,
	0x89, 0x23, 0x9e, 0xa1, 0xd8, 0x17, 0xe3, 0x1b, 0xc8, 0xd3, 0x00, 0xa0, 0xbb, 0x13, 0xdb, 0x7b,
	0x33, 0xf2, 0xf5, 0x93, 0x37, 0x37, 0xf4, 0xdf, 0xa9, 0x6a, 0xb8, 0xea, 0x4c, 0x6c, 0xa2, 0xe5,
	0x68, 0x74, 0xab, 0x9c, 0x42, 0x6e, 0xc6, 0x8f, 0x76, 0xa1, 0x7c, 0xdb, 0x6e, 0x69, 0x67, 0x9d,
	0xab, 0xdb, 0x1b, 0xbd, 0xf3, 0x55, 0xbb, 0xa5, 0xdf, 0xdf, 0xdc, 0xb5, 0x5b, 0xe7, 0x57, 0x97,
	0x57, 0xad, 0x8b, 0xc2, 0x3b, 0x08, 0x20, 0x79, 0xae, 0xb5, 0xce, 0x3a, 0xad, 0x82, 0x54, 0xff,
	0x23, 0x09, 0xe9, 0x80, 0x6c, 0xe8, 0x27, 0xc8, 0x46, 0x55, 0x86, 0x3e, 0x5e, 0x54, 0x60, 0x8c,
	0xfe, 0xcb, 0x87, 0x2f, 0x03, 0x7b, 0x7c, 0x56, 0x4a, 0x3f, 0xff, 0xfd, 0xcf, 0xef, 0x2b, 0x79,
	0x94, 0x8d, 0xbe, 0xfc, 0xe8, 0x37, 0x09, 0xf2, 0xb3, 0x02, 0x40, 0x47, 0x8b, 0x8e, 0x8d, 0xd5,
	0x64, 0x59, 0x7d, 0x29, 0xdc, 0xaf, 0x63, 0x57, 0xd4, 0x21, 0x2b, 0xc5, 0x68, 0x1d, 0x0d, 0x26,
	0xc0, 0x0d, 0xe9, 0x00, 0xb9, 0xb0, 0x1e, 0x6a, 0x02, 0x55, 0x17, 0x1d, 0x3e, 0x2f, 0x9b, 0xf2,
	0x12, 0xae, 0x2a, 0x3b, 0x22, 0xed, 0x16, 0xda, 0xe0, 0x69, 0xbf, 0xe7, 0x2c, 0xf9, 0x34, 0xfc,
	0x14, 0x1e, 0xfc, 0x88, 0x26, 0x90, 0x8d, 0x2a, 0x6c, 0xf1, 0x45, 0xc4, 0xe8, 0x70, 0x69, 0xee,
	0x6d, 0x91, 0x7b, 0x53, 0x99, 0x19, 0x7d, 0x23, 0x50, 0xcf, 0x2f, 0x12, 0x64, 0xa3, 0x6a, 0x5c,
	0x9c, 0x3b, 0x46, 0xb3, 0x4b, 0x73, 0x1f, 0x8a, 0xdc, 0xfb, 0xf5, 0x6d, 0xd1, 0xb7, 0x07, 0x50,
	0xe7, 0xdb, 0x0f, 0x6b, 0x99, 0x42, 0x36, 0x2a, 0xc6, 0xc5, 0xa5, 0xc4, 0x48, 0xf6, 0xa5, 0x57,
	0x70, 0x10, 0x7f, 0x05, 0xcd, 0xcf, 0xbf, 0xfe, 0xac, 0x6f, 0xba, 0x83, 0x71, 0x57, 0xed, 0xd1,
	0x51, 0x8d, 0x0c, 0x4d, 0xcc, 0xa6, 0xac, 0xe6, 0x1d, 0x79, 0x84, 0x6d, 0x33, 0x58, 0xcf, 0xff,
	0xc6, 0x9c, 0x06, 0xeb, 0x6e, 0x52, 0x3c, 0x35, 0x9f, 0xfc, 0x1b, 0x00, 0x00, 0xff, 0xff, 0xb5,
	0xc2, 0x14, 0xa0, 0xf0, 0x08, 0x00, 0x00,
}
