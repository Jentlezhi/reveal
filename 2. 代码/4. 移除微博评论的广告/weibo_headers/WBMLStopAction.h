//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBMLPnPResponseDelegate-Protocol.h"

@class NSString, WBMLPnPDevice, WBMLPnPRenderer;

@interface WBMLStopAction : NSObject <WBMLPnPResponseDelegate>
{
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _failureCallback;
    WBMLPnPDevice *_device;
    WBMLPnPRenderer *_render;
}

@property(retain, nonatomic) WBMLPnPRenderer *render; // @synthesize render=_render;
@property(retain, nonatomic) WBMLPnPDevice *device; // @synthesize device=_device;
@property(copy, nonatomic) CDUnknownBlockType failureCallback; // @synthesize failureCallback=_failureCallback;
@property(copy, nonatomic) CDUnknownBlockType successCallback; // @synthesize successCallback=_successCallback;
- (void).cxx_destruct;
- (void)upnpStopResponse;
- (void)upnpPlayResponse;
- (void)executeAction;
- (id)initWithDevice:(id)arg1 Success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

