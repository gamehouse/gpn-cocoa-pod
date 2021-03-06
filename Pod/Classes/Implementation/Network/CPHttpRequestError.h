//
//  CPHttpRequestError.h
//  CPHttpRequestError
//
//  Copyright 2015 GameHouse, a division of RealNetworks, Inc.
// 
//  The GameHouse Promotion Network SDK is licensed under the Apache License, 
//  Version 2.0 (the "License"); you may not use this file except in compliance 
//  with the License. You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>

@class CPHttpRequest;

typedef enum 
{
    CPHttpRequestErrorCodeUnexpectedHttpCode = -1000,    
    CPHttpRequestErrorCodeJSonParserFailed = -2000,
    CPHttpRequestErrorCodeConnectionError = -3000,
} CPHttpRequestErrorCode;

@interface CPHttpRequestError : NSError
{
    CPHttpRequest *request;
}

@property (nonatomic, readonly) NSInteger responseCode;
@property (nonatomic, readonly) CPHttpRequest *request;

- (id)initWithRequest:(CPHttpRequest *)request errorCode:(NSInteger)code andMessage:(NSString *)message;

@end
