//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIPanGestureRecognizer;

@interface WBVideoOverlayGestureEventInfos : NSObject
{
    double _horizontalValue;
    double _verticalValue;
    double _offsetX;
    double _offsetY;
    unsigned long long _panType;
    UIPanGestureRecognizer *_panGesture;
}

@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) unsigned long long panType; // @synthesize panType=_panType;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(nonatomic) double offsetX; // @synthesize offsetX=_offsetX;
@property(nonatomic) double verticalValue; // @synthesize verticalValue=_verticalValue;
@property(nonatomic) double horizontalValue; // @synthesize horizontalValue=_horizontalValue;
- (void).cxx_destruct;

@end

