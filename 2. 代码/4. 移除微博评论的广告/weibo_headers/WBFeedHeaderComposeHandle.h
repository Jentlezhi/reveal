//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HeaderHandleProtocol-Protocol.h"

@class NSString, WBFeedGroup, WBFeedHeaderComposeView;
@protocol HeaderManagerProtocol;

@interface WBFeedHeaderComposeHandle : NSObject <HeaderHandleProtocol>
{
    WBFeedGroup *_currentGroup;
    id <HeaderManagerProtocol> _headerManager;
    WBFeedHeaderComposeView *_composeView;
}

@property(retain, nonatomic) WBFeedHeaderComposeView *composeView; // @synthesize composeView=_composeView;
@property(nonatomic) __weak id <HeaderManagerProtocol> headerManager; // @synthesize headerManager=_headerManager;
- (void).cxx_destruct;
- (id)_loadCacheComposeOptionElementsWithUicode;
- (void)_handleDidClickEventWithModel:(id)arg1;
- (_Bool)holdEvents:(id)arg1;
- (_Bool)responseEvents:(id)arg1;
- (CDStruct_b2a2dcfe)headerConfig;
- (unsigned long long)headerViewState;
- (id)showView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

