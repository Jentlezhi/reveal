//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMMANativeMethodParamProtocol-Protocol.h"

@class NSString;

@interface XALiveFullScreenParam : NSObject <XMMANativeMethodParamProtocol>
{
    _Bool _fullScreen;
    NSString *_slaveId;
    NSString *_liveId;
    NSString *_direction;
}

@property(copy, nonatomic) NSString *direction; // @synthesize direction=_direction;
@property(nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(copy, nonatomic) NSString *slaveId; // @synthesize slaveId=_slaveId;
- (void).cxx_destruct;
- (_Bool)isValidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

