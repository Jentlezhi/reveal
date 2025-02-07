//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WVSerializableProtocol-Protocol.h"

@class NSString, WVPagePerformance;

@interface WVResPerformance : NSObject <WVSerializableProtocol>
{
    _Bool _isHTML;
    NSString *_url;
    NSString *_fromType;
    NSString *_statusCode;
    NSString *_via;
    NSString *_protocolType;
    NSString *_pkgName;
    NSString *_pkgVersion;
    NSString *_pkgSeq;
    unsigned long long _dataSize;
    double _start;
    double _end;
    long long _statusCodeInteger;
    NSString *_referrer;
    WVPagePerformance *_page;
}

+ (id)ignoredMonitorProperties;
+ (id)ignoredProperties;
@property(readonly, nonatomic) __weak WVPagePerformance *page; // @synthesize page=_page;
@property(readonly, nonatomic) _Bool isHTML; // @synthesize isHTML=_isHTML;
@property(readonly, copy, nonatomic) NSString *referrer; // @synthesize referrer=_referrer;
@property(readonly, nonatomic) long long statusCodeInteger; // @synthesize statusCodeInteger=_statusCodeInteger;
@property(readonly, nonatomic) double end; // @synthesize end=_end;
@property(readonly, nonatomic) double start; // @synthesize start=_start;
@property(readonly, nonatomic) unsigned long long dataSize; // @synthesize dataSize=_dataSize;
@property(readonly, copy, nonatomic) NSString *pkgSeq; // @synthesize pkgSeq=_pkgSeq;
@property(readonly, copy, nonatomic) NSString *pkgVersion; // @synthesize pkgVersion=_pkgVersion;
@property(readonly, copy, nonatomic) NSString *pkgName; // @synthesize pkgName=_pkgName;
@property(readonly, copy, nonatomic) NSString *protocolType; // @synthesize protocolType=_protocolType;
@property(readonly, copy, nonatomic) NSString *via; // @synthesize via=_via;
@property(readonly, copy, nonatomic) NSString *statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, copy, nonatomic) NSString *fromType; // @synthesize fromType=_fromType;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (double)ssl;
- (double)tcp;
@property(readonly, copy) NSString *description;
- (_Bool)isStatusSuccess;
- (_Bool)isFromNetwork;
- (double)loadTime;
- (void)recordHeader:(id)arg1;
- (void)recordStatusCode:(long long)arg1 fromType:(long long)arg2;
- (void)setReferrer:(id)arg1;
- (void)setEnd:(double)arg1;
- (void)setStart:(double)arg1;
- (void)setDataSize:(unsigned long long)arg1;
- (id)initWithURL:(id)arg1 withPage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

