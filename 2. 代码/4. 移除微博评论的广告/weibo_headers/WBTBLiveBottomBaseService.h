//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBTBLiveBottomBaseProtocol-Protocol.h"

@class NSString;
@protocol WBTBLiveBottomBaseProtocol;

@interface WBTBLiveBottomBaseService : NSObject <WBTBLiveBottomBaseProtocol>
{
    id <WBTBLiveBottomBaseProtocol> _delegate;
}

@property(nonatomic) __weak id <WBTBLiveBottomBaseProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showWhenFailed:(id)arg1;
- (void)showTips:(id)arg1 duration:(double)arg2;
- (void)showToastType:(unsigned long long)arg1 text:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

