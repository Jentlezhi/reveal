//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIPanGestureRecognizer;

@protocol WBARKitEngineDelegate <NSObject>
- (void)updateVirtualObjectEulerAngles:(struct SCNVector3)arg1 instantly:(_Bool)arg2;
- (void)updateVirtualObjectScale:(struct SCNVector3)arg1 instantly:(_Bool)arg2;
- (void)adaptiveVirtualObjectScalePosition:(struct SCNVector3)arg1 instantly:(_Bool)arg2;
- (void)updateVirtualObjectPosition:(struct SCNVector3)arg1 instantly:(_Bool)arg2;
- (_Bool)virtualObjectAtScreenPoint:(struct CGPoint)arg1;
- (struct SCNVector3)virtualObjectEulerAngles;
- (struct SCNVector3)virtualObjectScale;
- (struct SCNVector3)virtualObjectPosition;
- (double)virtualObjectHeight;
- (struct SCNVector3)projectPoint:(struct SCNVector3)arg1;
- (struct SCNVector3)unprojectPoint:(struct SCNVector3)arg1;

@optional
- (void)handlePan:(UIPanGestureRecognizer *)arg1;
- (void)didTapVirtualObject;
@end

