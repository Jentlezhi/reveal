//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WeiboCubeUGDixManager <NSObject>
- (void)getLoginTokenWithScene:(NSString *)arg1 Completion:(void (^)(NSString *, NSError *))arg2;
- (void)getPreAuthWithScene:(NSString *)arg1 Completion:(void (^)(NSString *, NSError *))arg2;
- (void)getPrecodeWithScene:(NSString *)arg1 Completion:(void (^)(NSString *, NSError *))arg2;
- (long long)networkType;
@end

