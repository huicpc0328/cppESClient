/**
 * Autogenerated by Thrift Compiler (1.0.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef elasticsearch_TYPES_H
#define elasticsearch_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace elasticsearch { namespace thrift {

struct Method {
  enum type {
    GET = 0,
    PUT = 1,
    POST = 2,
    DELETE = 3,
    HEAD = 4,
    OPTIONS = 5
  };
};

extern const std::map<int, const char*> _Method_VALUES_TO_NAMES;

struct Status {
  enum type {
    CONT = 100,
    SWITCHING_PROTOCOLS = 101,
    OK = 200,
    CREATED = 201,
    ACCEPTED = 202,
    NON_AUTHORITATIVE_INFORMATION = 203,
    NO_CONTENT = 204,
    RESET_CONTENT = 205,
    PARTIAL_CONTENT = 206,
    MULTI_STATUS = 207,
    MULTIPLE_CHOICES = 300,
    MOVED_PERMANENTLY = 301,
    FOUND = 302,
    SEE_OTHER = 303,
    NOT_MODIFIED = 304,
    USE_PROXY = 305,
    TEMPORARY_REDIRECT = 307,
    BAD_REQUEST = 400,
    UNAUTHORIZED = 401,
    PAYMENT_REQUIRED = 402,
    FORBIDDEN = 403,
    NOT_FOUND = 404,
    METHOD_NOT_ALLOWED = 405,
    NOT_ACCEPTABLE = 406,
    PROXY_AUTHENTICATION = 407,
    REQUEST_TIMEOUT = 408,
    CONFLICT = 409,
    GONE = 410,
    LENGTH_REQUIRED = 411,
    PRECONDITION_FAILED = 412,
    REQUEST_ENTITY_TOO_LARGE = 413,
    REQUEST_URI_TOO_LONG = 414,
    UNSUPPORTED_MEDIA_TYPE = 415,
    REQUESTED_RANGE_NOT_SATISFIED = 416,
    EXPECTATION_FAILED = 417,
    UNPROCESSABLE_ENTITY = 422,
    LOCKED = 423,
    FAILED_DEPENDENCY = 424,
    INTERNAL_SERVER_ERROR = 500,
    NOT_IMPLEMENTED = 501,
    BAD_GATEWAY = 502,
    SERVICE_UNAVAILABLE = 503,
    GATEWAY_TIMEOUT = 504,
    INSUFFICIENT_STORAGE = 506
  };
};

extern const std::map<int, const char*> _Status_VALUES_TO_NAMES;

typedef struct _RestRequest__isset {
  _RestRequest__isset() : parameters(false), headers(false), body(false) {}
  bool parameters;
  bool headers;
  bool body;
} _RestRequest__isset;

class RestRequest {
 public:

  static const char* ascii_fingerprint; // = "9A554A22D2E0B126EB0027C0FEF00D92";
  static const uint8_t binary_fingerprint[16]; // = {0x9A,0x55,0x4A,0x22,0xD2,0xE0,0xB1,0x26,0xEB,0x00,0x27,0xC0,0xFE,0xF0,0x0D,0x92};

  RestRequest() : method((Method::type)0), uri(), body() {
  }

  virtual ~RestRequest() throw() {}

  Method::type method;
  std::string uri;
  std::map<std::string, std::string>  parameters;
  std::map<std::string, std::string>  headers;
  std::string body;

  _RestRequest__isset __isset;

  void __set_method(const Method::type val) {
    method = val;
  }

  void __set_uri(const std::string& val) {
    uri = val;
  }

  void __set_parameters(const std::map<std::string, std::string> & val) {
    parameters = val;
    __isset.parameters = true;
  }

  void __set_headers(const std::map<std::string, std::string> & val) {
    headers = val;
    __isset.headers = true;
  }

  void __set_body(const std::string& val) {
    body = val;
    __isset.body = true;
  }

  bool operator == (const RestRequest & rhs) const
  {
    if (!(method == rhs.method))
      return false;
    if (!(uri == rhs.uri))
      return false;
    if (__isset.parameters != rhs.__isset.parameters)
      return false;
    else if (__isset.parameters && !(parameters == rhs.parameters))
      return false;
    if (__isset.headers != rhs.__isset.headers)
      return false;
    else if (__isset.headers && !(headers == rhs.headers))
      return false;
    if (__isset.body != rhs.__isset.body)
      return false;
    else if (__isset.body && !(body == rhs.body))
      return false;
    return true;
  }
  bool operator != (const RestRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RestRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RestRequest &a, RestRequest &b);

typedef struct _RestResponse__isset {
  _RestResponse__isset() : headers(false), body(false) {}
  bool headers;
  bool body;
} _RestResponse__isset;

class RestResponse {
 public:

  static const char* ascii_fingerprint; // = "E25AD7563637469761C9D5018A1E29AF";
  static const uint8_t binary_fingerprint[16]; // = {0xE2,0x5A,0xD7,0x56,0x36,0x37,0x46,0x97,0x61,0xC9,0xD5,0x01,0x8A,0x1E,0x29,0xAF};

  RestResponse() : status((Status::type)0), body() {
  }

  virtual ~RestResponse() throw() {}

  Status::type status;
  std::map<std::string, std::string>  headers;
  std::string body;

  _RestResponse__isset __isset;

  void __set_status(const Status::type val) {
    status = val;
  }

  void __set_headers(const std::map<std::string, std::string> & val) {
    headers = val;
    __isset.headers = true;
  }

  void __set_body(const std::string& val) {
    body = val;
    __isset.body = true;
  }

  bool operator == (const RestResponse & rhs) const
  {
    if (!(status == rhs.status))
      return false;
    if (__isset.headers != rhs.__isset.headers)
      return false;
    else if (__isset.headers && !(headers == rhs.headers))
      return false;
    if (__isset.body != rhs.__isset.body)
      return false;
    else if (__isset.body && !(body == rhs.body))
      return false;
    return true;
  }
  bool operator != (const RestResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RestResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RestResponse &a, RestResponse &b);

}} // namespace

#endif
