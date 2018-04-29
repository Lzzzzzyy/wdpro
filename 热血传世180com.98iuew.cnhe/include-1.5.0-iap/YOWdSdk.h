//
//  YOWdSdk.h
//  YOWdSdk
//
//  Created by gutou on 2018/1/20.
//  Copyright © 2018年 jack. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface YOWdSdk : NSObject

- (void) initYOWdSdkWithSuccessHandle:(void(^)(UIViewController *rootViewController))successCompletion
                                 Fail:(void(^)(NSError *error))failure;

@end
