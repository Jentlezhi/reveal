//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMMACoverViewDelegate-Protocol.h"
#import "XMMANativeModule-Protocol.h"

@class NSString, XMMAWebView;

@interface XMMACoverImageAbility : NSObject <XMMACoverViewDelegate, XMMANativeModule>
{
    XMMAWebView *webview;
}

+ (id)methodQueue;
+ (void)load;
@property(nonatomic) __weak XMMAWebView *webview; // @synthesize webview;
- (void).cxx_destruct;
- (void)coverView:(id)arg1 touchEventTrigger:(id)arg2 action:(id)arg3;
- (void)checkSrcAvaliable:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)xmma_v1_coverimageupdate_param:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)xmma_v1_coverimageremove_param:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)xmma_v1_coverimageinsert_param:(id)arg1 result:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

