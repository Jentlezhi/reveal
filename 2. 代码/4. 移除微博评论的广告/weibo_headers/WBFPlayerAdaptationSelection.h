//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBFAVMediaSelection-Protocol.h"

@class NSString, WBFPlayerAdaptationContext;

@interface WBFPlayerAdaptationSelection : NSObject <WBFAVMediaSelection>
{
    int _selection[3];
    WBFPlayerAdaptationContext *_context;
}

@property(nonatomic) __weak WBFPlayerAdaptationContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)currentPlaybackRepresentationForContentType:(long long)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAdaptationContext:(id)arg1 currentPlaybackSelection:(int (*)[3])arg2 loadingSelection:(int (*)[3])arg3 manualSelection:(_Bool)arg4;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

