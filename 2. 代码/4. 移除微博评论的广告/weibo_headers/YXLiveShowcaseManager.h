//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YXLiveShowcaseWebViewDelegate-Protocol.h"

@class NSString, NSURL, UIImageView, UIView, YXLiveShowcaseWebView, YXLiveViewController;
@protocol YXLiveShowCaseManagerDelegate;

@interface YXLiveShowcaseManager : NSObject <YXLiveShowcaseWebViewDelegate>
{
    NSObject<YXLiveShowCaseManagerDelegate> *_delegate;
    UIImageView *_showcaseIconImageView;
    UIImageView *_showcaseImageBgView;
    YXLiveShowcaseWebView *_showcaseWebView;
    NSURL *_showcaseURL;
    YXLiveViewController *_liveViewController;
    UIView *_movableView;
    UIView *_rootView;
}

@property(nonatomic) __weak UIView *rootView; // @synthesize rootView=_rootView;
@property(nonatomic) __weak UIView *movableView; // @synthesize movableView=_movableView;
@property(nonatomic) __weak YXLiveViewController *liveViewController; // @synthesize liveViewController=_liveViewController;
@property(retain, nonatomic) NSURL *showcaseURL; // @synthesize showcaseURL=_showcaseURL;
@property(nonatomic) __weak YXLiveShowcaseWebView *showcaseWebView; // @synthesize showcaseWebView=_showcaseWebView;
@property(nonatomic) __weak UIImageView *showcaseImageBgView; // @synthesize showcaseImageBgView=_showcaseImageBgView;
@property(nonatomic) __weak UIImageView *showcaseIconImageView; // @synthesize showcaseIconImageView=_showcaseIconImageView;
@property(nonatomic) __weak NSObject<YXLiveShowCaseManagerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showcaseWebView:(id)arg1 didReceiveMessage:(id)arg2;
- (void)hideShowcaseWebView:(id)arg1;
- (void)showShowcaseWebViewToView;
- (void)removeShowcaseViews;
- (void)showShowcaseViews:(id)arg1;
- (void)buildAndShowShowcaseViews:(id)arg1 movableView:(id)arg2 rootView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

