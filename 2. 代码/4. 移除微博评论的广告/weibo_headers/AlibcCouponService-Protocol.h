//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AlibcTradeTaokeParams, NSDictionary, NSString;

@protocol AlibcCouponService <NSObject>
- (void)querySellerCouponList:(void (^)(id))arg1 failedBlock:(void (^)(ALiNetError *, id))arg2;
- (void)getCouponWithSupplierID:(NSString *)arg1 uuid:(NSString *)arg2 couponInstanceSource:(NSString *)arg3 asac:(NSString *)arg4 trackParams:(NSDictionary *)arg5 extParams:(NSDictionary *)arg6 successBlock:(void (^)(id))arg7 failedBlock:(void (^)(ALiNetError *, id))arg8;
- (void)getCouponWithSupplierID:(NSString *)arg1 uuid:(NSString *)arg2 couponInstanceSource:(NSString *)arg3 asac:(NSString *)arg4 taokeParams:(AlibcTradeTaokeParams *)arg5 trackParams:(NSDictionary *)arg6 successBlock:(void (^)(id))arg7 failedBlock:(void (^)(ALiNetError *, id))arg8;
@end

