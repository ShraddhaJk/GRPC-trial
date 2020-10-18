// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.25.0-devel
// 	protoc        v3.12.3
// source: trade.proto

package marketfeed

import (
	context "context"
	proto "github.com/golang/protobuf/proto"
	grpc "google.golang.org/grpc"
	codes "google.golang.org/grpc/codes"
	status "google.golang.org/grpc/status"
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
	reflect "reflect"
	sync "sync"
)

const (
	// Verify that this generated code is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(20 - protoimpl.MinVersion)
	// Verify that runtime/protoimpl is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(protoimpl.MaxVersion - 20)
)

// This is a compile-time assertion that a sufficiently up-to-date version
// of the legacy proto package is being used.
const _ = proto.ProtoPackageIsVersion4

type Trade struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Ticker      string  `protobuf:"bytes,1,opt,name=ticker,proto3" json:"ticker,omitempty"`
	Timestamp   int64   `protobuf:"varint,2,opt,name=timestamp,proto3" json:"timestamp,omitempty"`
	Price       float64 `protobuf:"fixed64,3,opt,name=price,proto3" json:"price,omitempty"`
	Transaction int64   `protobuf:"varint,4,opt,name=transaction,proto3" json:"transaction,omitempty"`
	Open        float64 `protobuf:"fixed64,5,opt,name=open,proto3" json:"open,omitempty"`
	Direction   int32   `protobuf:"zigzag32,6,opt,name=direction,proto3" json:"direction,omitempty"` // -1, 0, 1
}

func (x *Trade) Reset() {
	*x = Trade{}
	if protoimpl.UnsafeEnabled {
		mi := &file_trade_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *Trade) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*Trade) ProtoMessage() {}

func (x *Trade) ProtoReflect() protoreflect.Message {
	mi := &file_trade_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use Trade.ProtoReflect.Descriptor instead.
func (*Trade) Descriptor() ([]byte, []int) {
	return file_trade_proto_rawDescGZIP(), []int{0}
}

func (x *Trade) GetTicker() string {
	if x != nil {
		return x.Ticker
	}
	return ""
}

func (x *Trade) GetTimestamp() int64 {
	if x != nil {
		return x.Timestamp
	}
	return 0
}

func (x *Trade) GetPrice() float64 {
	if x != nil {
		return x.Price
	}
	return 0
}

func (x *Trade) GetTransaction() int64 {
	if x != nil {
		return x.Transaction
	}
	return 0
}

func (x *Trade) GetOpen() float64 {
	if x != nil {
		return x.Open
	}
	return 0
}

func (x *Trade) GetDirection() int32 {
	if x != nil {
		return x.Direction
	}
	return 0
}

type VoidMessage struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields
}

func (x *VoidMessage) Reset() {
	*x = VoidMessage{}
	if protoimpl.UnsafeEnabled {
		mi := &file_trade_proto_msgTypes[1]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *VoidMessage) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*VoidMessage) ProtoMessage() {}

func (x *VoidMessage) ProtoReflect() protoreflect.Message {
	mi := &file_trade_proto_msgTypes[1]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use VoidMessage.ProtoReflect.Descriptor instead.
func (*VoidMessage) Descriptor() ([]byte, []int) {
	return file_trade_proto_rawDescGZIP(), []int{1}
}

type FilterRequest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Delay   int64    `protobuf:"varint,1,opt,name=delay,proto3" json:"delay,omitempty"`
	Tickers []string `protobuf:"bytes,2,rep,name=tickers,proto3" json:"tickers,omitempty"`
}

func (x *FilterRequest) Reset() {
	*x = FilterRequest{}
	if protoimpl.UnsafeEnabled {
		mi := &file_trade_proto_msgTypes[2]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *FilterRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*FilterRequest) ProtoMessage() {}

func (x *FilterRequest) ProtoReflect() protoreflect.Message {
	mi := &file_trade_proto_msgTypes[2]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use FilterRequest.ProtoReflect.Descriptor instead.
func (*FilterRequest) Descriptor() ([]byte, []int) {
	return file_trade_proto_rawDescGZIP(), []int{2}
}

func (x *FilterRequest) GetDelay() int64 {
	if x != nil {
		return x.Delay
	}
	return 0
}

func (x *FilterRequest) GetTickers() []string {
	if x != nil {
		return x.Tickers
	}
	return nil
}

var File_trade_proto protoreflect.FileDescriptor

var file_trade_proto_rawDesc = []byte{
	0x0a, 0x0b, 0x74, 0x72, 0x61, 0x64, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x12, 0x0a, 0x6d,
	0x61, 0x72, 0x6b, 0x65, 0x74, 0x66, 0x65, 0x65, 0x64, 0x22, 0xa7, 0x01, 0x0a, 0x05, 0x54, 0x72,
	0x61, 0x64, 0x65, 0x12, 0x16, 0x0a, 0x06, 0x74, 0x69, 0x63, 0x6b, 0x65, 0x72, 0x18, 0x01, 0x20,
	0x01, 0x28, 0x09, 0x52, 0x06, 0x74, 0x69, 0x63, 0x6b, 0x65, 0x72, 0x12, 0x1c, 0x0a, 0x09, 0x74,
	0x69, 0x6d, 0x65, 0x73, 0x74, 0x61, 0x6d, 0x70, 0x18, 0x02, 0x20, 0x01, 0x28, 0x03, 0x52, 0x09,
	0x74, 0x69, 0x6d, 0x65, 0x73, 0x74, 0x61, 0x6d, 0x70, 0x12, 0x14, 0x0a, 0x05, 0x70, 0x72, 0x69,
	0x63, 0x65, 0x18, 0x03, 0x20, 0x01, 0x28, 0x01, 0x52, 0x05, 0x70, 0x72, 0x69, 0x63, 0x65, 0x12,
	0x20, 0x0a, 0x0b, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x61, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x18, 0x04,
	0x20, 0x01, 0x28, 0x03, 0x52, 0x0b, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x61, 0x63, 0x74, 0x69, 0x6f,
	0x6e, 0x12, 0x12, 0x0a, 0x04, 0x6f, 0x70, 0x65, 0x6e, 0x18, 0x05, 0x20, 0x01, 0x28, 0x01, 0x52,
	0x04, 0x6f, 0x70, 0x65, 0x6e, 0x12, 0x1c, 0x0a, 0x09, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69,
	0x6f, 0x6e, 0x18, 0x06, 0x20, 0x01, 0x28, 0x11, 0x52, 0x09, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74,
	0x69, 0x6f, 0x6e, 0x22, 0x0d, 0x0a, 0x0b, 0x56, 0x6f, 0x69, 0x64, 0x4d, 0x65, 0x73, 0x73, 0x61,
	0x67, 0x65, 0x22, 0x3f, 0x0a, 0x0d, 0x46, 0x69, 0x6c, 0x74, 0x65, 0x72, 0x52, 0x65, 0x71, 0x75,
	0x65, 0x73, 0x74, 0x12, 0x14, 0x0a, 0x05, 0x64, 0x65, 0x6c, 0x61, 0x79, 0x18, 0x01, 0x20, 0x01,
	0x28, 0x03, 0x52, 0x05, 0x64, 0x65, 0x6c, 0x61, 0x79, 0x12, 0x18, 0x0a, 0x07, 0x74, 0x69, 0x63,
	0x6b, 0x65, 0x72, 0x73, 0x18, 0x02, 0x20, 0x03, 0x28, 0x09, 0x52, 0x07, 0x74, 0x69, 0x63, 0x6b,
	0x65, 0x72, 0x73, 0x32, 0x51, 0x0a, 0x0c, 0x54, 0x69, 0x63, 0x6b, 0x65, 0x72, 0x53, 0x6f, 0x75,
	0x72, 0x63, 0x65, 0x12, 0x41, 0x0a, 0x0f, 0x43, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x46, 0x69,
	0x72, 0x65, 0x68, 0x6f, 0x73, 0x65, 0x12, 0x17, 0x2e, 0x6d, 0x61, 0x72, 0x6b, 0x65, 0x74, 0x66,
	0x65, 0x65, 0x64, 0x2e, 0x56, 0x6f, 0x69, 0x64, 0x4d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x1a,
	0x11, 0x2e, 0x6d, 0x61, 0x72, 0x6b, 0x65, 0x74, 0x66, 0x65, 0x65, 0x64, 0x2e, 0x54, 0x72, 0x61,
	0x64, 0x65, 0x22, 0x00, 0x30, 0x01, 0x32, 0x5d, 0x0a, 0x17, 0x41, 0x70, 0x70, 0x6c, 0x69, 0x63,
	0x61, 0x74, 0x69, 0x6f, 0x6e, 0x54, 0x69, 0x63, 0x6b, 0x65, 0x72, 0x53, 0x6f, 0x75, 0x72, 0x63,
	0x65, 0x12, 0x42, 0x0a, 0x0e, 0x46, 0x69, 0x6c, 0x74, 0x65, 0x72, 0x65, 0x64, 0x53, 0x74, 0x72,
	0x65, 0x61, 0x6d, 0x12, 0x19, 0x2e, 0x6d, 0x61, 0x72, 0x6b, 0x65, 0x74, 0x66, 0x65, 0x65, 0x64,
	0x2e, 0x46, 0x69, 0x6c, 0x74, 0x65, 0x72, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x1a, 0x11,
	0x2e, 0x6d, 0x61, 0x72, 0x6b, 0x65, 0x74, 0x66, 0x65, 0x65, 0x64, 0x2e, 0x54, 0x72, 0x61, 0x64,
	0x65, 0x22, 0x00, 0x30, 0x01, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_trade_proto_rawDescOnce sync.Once
	file_trade_proto_rawDescData = file_trade_proto_rawDesc
)

func file_trade_proto_rawDescGZIP() []byte {
	file_trade_proto_rawDescOnce.Do(func() {
		file_trade_proto_rawDescData = protoimpl.X.CompressGZIP(file_trade_proto_rawDescData)
	})
	return file_trade_proto_rawDescData
}

var file_trade_proto_msgTypes = make([]protoimpl.MessageInfo, 3)
var file_trade_proto_goTypes = []interface{}{
	(*Trade)(nil),         // 0: marketfeed.Trade
	(*VoidMessage)(nil),   // 1: marketfeed.VoidMessage
	(*FilterRequest)(nil), // 2: marketfeed.FilterRequest
}
var file_trade_proto_depIdxs = []int32{
	1, // 0: marketfeed.TickerSource.ConnectFirehose:input_type -> marketfeed.VoidMessage
	2, // 1: marketfeed.ApplicationTickerSource.FilteredStream:input_type -> marketfeed.FilterRequest
	0, // 2: marketfeed.TickerSource.ConnectFirehose:output_type -> marketfeed.Trade
	0, // 3: marketfeed.ApplicationTickerSource.FilteredStream:output_type -> marketfeed.Trade
	2, // [2:4] is the sub-list for method output_type
	0, // [0:2] is the sub-list for method input_type
	0, // [0:0] is the sub-list for extension type_name
	0, // [0:0] is the sub-list for extension extendee
	0, // [0:0] is the sub-list for field type_name
}

func init() { file_trade_proto_init() }
func file_trade_proto_init() {
	if File_trade_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_trade_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*Trade); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_trade_proto_msgTypes[1].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*VoidMessage); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_trade_proto_msgTypes[2].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*FilterRequest); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
	}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_trade_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   3,
			NumExtensions: 0,
			NumServices:   2,
		},
		GoTypes:           file_trade_proto_goTypes,
		DependencyIndexes: file_trade_proto_depIdxs,
		MessageInfos:      file_trade_proto_msgTypes,
	}.Build()
	File_trade_proto = out.File
	file_trade_proto_rawDesc = nil
	file_trade_proto_goTypes = nil
	file_trade_proto_depIdxs = nil
}

// Reference imports to suppress errors if they are not otherwise used.
var _ context.Context
var _ grpc.ClientConnInterface

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
const _ = grpc.SupportPackageIsVersion6

// TickerSourceClient is the client API for TickerSource service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
type TickerSourceClient interface {
	ConnectFirehose(ctx context.Context, in *VoidMessage, opts ...grpc.CallOption) (TickerSource_ConnectFirehoseClient, error)
}

type tickerSourceClient struct {
	cc grpc.ClientConnInterface
}

func NewTickerSourceClient(cc grpc.ClientConnInterface) TickerSourceClient {
	return &tickerSourceClient{cc}
}

func (c *tickerSourceClient) ConnectFirehose(ctx context.Context, in *VoidMessage, opts ...grpc.CallOption) (TickerSource_ConnectFirehoseClient, error) {
	stream, err := c.cc.NewStream(ctx, &_TickerSource_serviceDesc.Streams[0], "/marketfeed.TickerSource/ConnectFirehose", opts...)
	if err != nil {
		return nil, err
	}
	x := &tickerSourceConnectFirehoseClient{stream}
	if err := x.ClientStream.SendMsg(in); err != nil {
		return nil, err
	}
	if err := x.ClientStream.CloseSend(); err != nil {
		return nil, err
	}
	return x, nil
}

type TickerSource_ConnectFirehoseClient interface {
	Recv() (*Trade, error)
	grpc.ClientStream
}

type tickerSourceConnectFirehoseClient struct {
	grpc.ClientStream
}

func (x *tickerSourceConnectFirehoseClient) Recv() (*Trade, error) {
	m := new(Trade)
	if err := x.ClientStream.RecvMsg(m); err != nil {
		return nil, err
	}
	return m, nil
}

// TickerSourceServer is the server API for TickerSource service.
type TickerSourceServer interface {
	ConnectFirehose(*VoidMessage, TickerSource_ConnectFirehoseServer) error
}

// UnimplementedTickerSourceServer can be embedded to have forward compatible implementations.
type UnimplementedTickerSourceServer struct {
}

func (*UnimplementedTickerSourceServer) ConnectFirehose(*VoidMessage, TickerSource_ConnectFirehoseServer) error {
	return status.Errorf(codes.Unimplemented, "method ConnectFirehose not implemented")
}

func RegisterTickerSourceServer(s *grpc.Server, srv TickerSourceServer) {
	s.RegisterService(&_TickerSource_serviceDesc, srv)
}

func _TickerSource_ConnectFirehose_Handler(srv interface{}, stream grpc.ServerStream) error {
	m := new(VoidMessage)
	if err := stream.RecvMsg(m); err != nil {
		return err
	}
	return srv.(TickerSourceServer).ConnectFirehose(m, &tickerSourceConnectFirehoseServer{stream})
}

type TickerSource_ConnectFirehoseServer interface {
	Send(*Trade) error
	grpc.ServerStream
}

type tickerSourceConnectFirehoseServer struct {
	grpc.ServerStream
}

func (x *tickerSourceConnectFirehoseServer) Send(m *Trade) error {
	return x.ServerStream.SendMsg(m)
}

var _TickerSource_serviceDesc = grpc.ServiceDesc{
	ServiceName: "marketfeed.TickerSource",
	HandlerType: (*TickerSourceServer)(nil),
	Methods:     []grpc.MethodDesc{},
	Streams: []grpc.StreamDesc{
		{
			StreamName:    "ConnectFirehose",
			Handler:       _TickerSource_ConnectFirehose_Handler,
			ServerStreams: true,
		},
	},
	Metadata: "trade.proto",
}

// ApplicationTickerSourceClient is the client API for ApplicationTickerSource service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
type ApplicationTickerSourceClient interface {
	FilteredStream(ctx context.Context, in *FilterRequest, opts ...grpc.CallOption) (ApplicationTickerSource_FilteredStreamClient, error)
}

type applicationTickerSourceClient struct {
	cc grpc.ClientConnInterface
}

func NewApplicationTickerSourceClient(cc grpc.ClientConnInterface) ApplicationTickerSourceClient {
	return &applicationTickerSourceClient{cc}
}

func (c *applicationTickerSourceClient) FilteredStream(ctx context.Context, in *FilterRequest, opts ...grpc.CallOption) (ApplicationTickerSource_FilteredStreamClient, error) {
	stream, err := c.cc.NewStream(ctx, &_ApplicationTickerSource_serviceDesc.Streams[0], "/marketfeed.ApplicationTickerSource/FilteredStream", opts...)
	if err != nil {
		return nil, err
	}
	x := &applicationTickerSourceFilteredStreamClient{stream}
	if err := x.ClientStream.SendMsg(in); err != nil {
		return nil, err
	}
	if err := x.ClientStream.CloseSend(); err != nil {
		return nil, err
	}
	return x, nil
}

type ApplicationTickerSource_FilteredStreamClient interface {
	Recv() (*Trade, error)
	grpc.ClientStream
}

type applicationTickerSourceFilteredStreamClient struct {
	grpc.ClientStream
}

func (x *applicationTickerSourceFilteredStreamClient) Recv() (*Trade, error) {
	m := new(Trade)
	if err := x.ClientStream.RecvMsg(m); err != nil {
		return nil, err
	}
	return m, nil
}

// ApplicationTickerSourceServer is the server API for ApplicationTickerSource service.
type ApplicationTickerSourceServer interface {
	FilteredStream(*FilterRequest, ApplicationTickerSource_FilteredStreamServer) error
}

// UnimplementedApplicationTickerSourceServer can be embedded to have forward compatible implementations.
type UnimplementedApplicationTickerSourceServer struct {
}

func (*UnimplementedApplicationTickerSourceServer) FilteredStream(*FilterRequest, ApplicationTickerSource_FilteredStreamServer) error {
	return status.Errorf(codes.Unimplemented, "method FilteredStream not implemented")
}

func RegisterApplicationTickerSourceServer(s *grpc.Server, srv ApplicationTickerSourceServer) {
	s.RegisterService(&_ApplicationTickerSource_serviceDesc, srv)
}

func _ApplicationTickerSource_FilteredStream_Handler(srv interface{}, stream grpc.ServerStream) error {
	m := new(FilterRequest)
	if err := stream.RecvMsg(m); err != nil {
		return err
	}
	return srv.(ApplicationTickerSourceServer).FilteredStream(m, &applicationTickerSourceFilteredStreamServer{stream})
}

type ApplicationTickerSource_FilteredStreamServer interface {
	Send(*Trade) error
	grpc.ServerStream
}

type applicationTickerSourceFilteredStreamServer struct {
	grpc.ServerStream
}

func (x *applicationTickerSourceFilteredStreamServer) Send(m *Trade) error {
	return x.ServerStream.SendMsg(m)
}

var _ApplicationTickerSource_serviceDesc = grpc.ServiceDesc{
	ServiceName: "marketfeed.ApplicationTickerSource",
	HandlerType: (*ApplicationTickerSourceServer)(nil),
	Methods:     []grpc.MethodDesc{},
	Streams: []grpc.StreamDesc{
		{
			StreamName:    "FilteredStream",
			Handler:       _ApplicationTickerSource_FilteredStream_Handler,
			ServerStreams: true,
		},
	},
	Metadata: "trade.proto",
}
