//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AlibcCouponService-Protocol.h"
#import "AlibcTradeContainerWantComponent-Protocol.h"

@class NSString;
@protocol AlibcTradeContainerMtopService;

@interface AlibcTradeContainerCouponComponent : NSObject <AlibcTradeContainerWantComponent, AlibcCouponService>
{
    id <AlibcTradeContainerMtopService> _mtop;
}

@property(retain, nonatomic) id <AlibcTradeContainerMtopService> mtop; // @synthesize mtop=_mtop;
- (void).cxx_destruct;
- (id)monitorPointNameForAction:(id)arg1;
- (void)commitFailForMissingParamsWhenActionIs:(id)arg1 errorMsg:(id)arg2;
- (void)asyncCouponSellerQueryWithQueryParams:(id)arg1 taokeParams:(id)arg2 trackParams:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5;
- (void)asyncCouponGetWithQueryParams:(id)arg1 trackParams:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failedBlock:(CDUnknownBlockType)arg4;
- (void)querySellerCouponList:(CDUnknownBlockType)arg1 failedBlock:(CDUnknownBlockType)arg2;
- (void)getCouponWithSupplierID:(id)arg1 uuid:(id)arg2 couponInstanceSource:(id)arg3 asac:(id)arg4 trackParams:(id)arg5 extParams:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failedBlock:(CDUnknownBlockType)arg8;
- (void)getCouponWithSupplierID:(id)arg1 uuid:(id)arg2 couponInstanceSource:(id)arg3 asac:(id)arg4 taokeParams:(id)arg5 trackParams:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failedBlock:(CDUnknownBlockType)arg8;
- (void)asyncExecuteWithQueryParams:(id)arg1 action:(id)arg2 taokeParams:(id)arg3 trackParams:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failedBlock:(CDUnknownBlockType)arg6;
- (id)getHintList;
- (long long)getSupportDataType;
- (id)getBizId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

