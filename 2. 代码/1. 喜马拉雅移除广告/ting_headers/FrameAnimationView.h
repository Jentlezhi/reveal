//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, NSArray;
@protocol FrameAnimationViewDelegate;

@interface FrameAnimationView : UIView
{
    NSArray *_frameImages;
    int _currentCycle;
    int _animatingIndex;
    double _timeSinceLastUpdate;
    double _timePerFrame;
    int _framePerSec;
    int _loops;
    id <FrameAnimationViewDelegate> _delegate;
    CADisplayLink *_displayLink;
}

@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) __weak id <FrameAnimationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int loops; // @synthesize loops=_loops;
@property(nonatomic) int framePerSec; // @synthesize framePerSec=_framePerSec;
- (void).cxx_destruct;
- (void)displayImageForIndex:(int)arg1;
- (id)imageForIndex:(int)arg1;
- (void)animationLoop:(id)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (void)setImages:(id)arg1;
- (id)init;

@end

