//
//  CTServiceProtocol.h
//  BLNetworking
//
//  Created by user on 17/5/23.
//  Copyright © 2017年 casa. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CTNetworkingDefines.h"

@protocol CTServiceProtocol <NSObject>

@property (nonatomic, assign)CTServiceAPIEnvironment apiEnvironment;

- (NSURLRequest *)requestWithParams:(NSDictionary *)params methodName:(NSString *)methodName requestType:(CTAPIManagerRequestType)requestType timeoutSeconds:(NSTimeInterval)second;
- (NSDictionary *)resultWithResponseData:(NSData *)responseData response:(NSURLResponse *)response request:(NSURLRequest *)request error:(NSError **)error;

@optional

//每个服务用同一套url重连逻辑
- (NSInteger)retryCountWithAlreadyCount:(NSInteger)alreadyCount;

@end
