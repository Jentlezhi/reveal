//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "RCTSurfaceDelegate-Protocol.h"

@class NSString, RCTSurface;

@interface RCTSurfaceHostingView : UIView <RCTSurfaceDelegate>
{
    UIView *_activityIndicatorView;
    UIView *_surfaceView;
    long long _stage;
    _Bool _isActivityIndicatorViewVisible;
    _Bool _isSurfaceViewVisible;
    RCTSurface *_surface;
    long long _sizeMeasureMode;
    CDUnknownBlockType _activityIndicatorViewFactory;
}

@property(nonatomic) _Bool isSurfaceViewVisible; // @synthesize isSurfaceViewVisible=_isSurfaceViewVisible;
@property(nonatomic) _Bool isActivityIndicatorViewVisible; // @synthesize isActivityIndicatorViewVisible=_isActivityIndicatorViewVisible;
@property(copy, nonatomic) CDUnknownBlockType activityIndicatorViewFactory; // @synthesize activityIndicatorViewFactory=_activityIndicatorViewFactory;
@property(nonatomic) long long sizeMeasureMode; // @synthesize sizeMeasureMode=_sizeMeasureMode;
@property(readonly, nonatomic) RCTSurface *surface; // @synthesize surface=_surface;
- (void).cxx_destruct;
- (void)surface:(id)arg1 didChangeIntrinsicSize:(struct CGSize)arg2;
- (void)surface:(id)arg1 didChangeStage:(long long)arg2;
- (void)didMoveToWindow;
- (void)_updateViews;
- (void)_invalidateLayout;
- (void)setStage:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setFrame:(struct CGRect)arg1;
- (id)createSurfaceWithBridge:(id)arg1 moduleName:(id)arg2 initialProperties:(id)arg3;
- (id)initWithSurface:(id)arg1 sizeMeasureMode:(long long)arg2;
- (id)initWithBridge:(id)arg1 moduleName:(id)arg2 initialProperties:(id)arg3 sizeMeasureMode:(long long)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

