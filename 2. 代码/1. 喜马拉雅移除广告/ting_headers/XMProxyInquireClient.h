//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSString;

@interface XMProxyInquireClient : NSObject <UIAlertViewDelegate>
{
}

+ (void)showAlertPhoneNumberNotMatch;
+ (int)tellCarrierTypeWithPhoneNumber:(id)arg1;
+ (void)checkCurrentPhoneNumberAndLocal:(id)arg1;
+ (id)getIPAddresses;
+ (_Bool)isValidatIP:(id)arg1;
+ (id)getPrivateIPAddress:(_Bool)arg1;
+ (void)kingCardInfo;
+ (void)inquireUnicomFreeFlowStatus;
+ (id)getInquiryUrl;
+ (id)abcdSort:(id)arg1;
+ (id)jointBodyParam:(id)arg1;
+ (id)hmacsha1:(id)arg1 secret:(id)arg2;
+ (void)inquireTelecomFreeFlowStatus;
+ (id)getInquirySign:(id)arg1;
+ (id)getInquiryPostData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

