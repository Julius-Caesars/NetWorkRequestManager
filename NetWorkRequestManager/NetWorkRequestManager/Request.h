//
//  Request.h
//  Leisure
//
//  Created by on 16/4/14.
//  Copyright © 2016年 fankai. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Request : NSObject
typedef NS_ENUM(NSInteger, RequestType) {
    GET,
    POST
};

//网络请求完成的block
typedef void (^RequestFinish)(NSData *data);
//网络请求失败的block
typedef void (^RequestError)(NSError *error);

+ (void)requestWithType:(RequestType)type urlString:(NSString *)urlString parDic:(NSDictionary *)parDic finish:(RequestFinish)finish error:(RequestError)error;


@end
