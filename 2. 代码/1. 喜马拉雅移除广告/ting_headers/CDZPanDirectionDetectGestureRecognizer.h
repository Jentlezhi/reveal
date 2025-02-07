//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@protocol CDZPanDirectionDetectGestureRecognizerDelegate;

@interface CDZPanDirectionDetectGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _startPoint;
    struct CGPoint _currentPoint;
}

@property(readonly, nonatomic) struct CGPoint currentPoint; // @synthesize currentPoint=_currentPoint;
@property(readonly, nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <CDZPanDirectionDetectGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end

