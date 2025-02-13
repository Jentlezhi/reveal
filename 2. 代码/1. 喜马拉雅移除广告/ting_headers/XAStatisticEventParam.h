//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMMANativeMethodParamProtocol-Protocol.h"

@class NSDictionary, NSString;

@interface XAStatisticEventParam : NSObject <XMMANativeMethodParamProtocol>
{
    NSString *_groupId;
    NSString *_bizId;
    NSString *_eventName;
    NSDictionary *_content;
    NSString *_appVersion;
    NSString *_swanType;
}

@property(copy, nonatomic) NSString *swanType; // @synthesize swanType=_swanType;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSDictionary *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(copy, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (_Bool)isValidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

