//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSTimer, UIView;

@interface WBMLVideoLikeEffectManager : NSObject
{
    int pointFaceTo;
    _Bool _isCanFlyHeart;
    CALayer *_heartLayer;
    UIView *_pointSuperView;
    NSTimer *_timer;
}

+ (void)destoryInstance;
+ (id)shareInstance;
+ (void)initInstance;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isCanFlyHeart; // @synthesize isCanFlyHeart=_isCanFlyHeart;
@property(retain, nonatomic) UIView *pointSuperView; // @synthesize pointSuperView=_pointSuperView;
@property(retain, nonatomic) CALayer *heartLayer; // @synthesize heartLayer=_heartLayer;
- (void).cxx_destruct;
- (void)_stopTimer;
- (int)_rateFaceTo;
- (int)_getRandom:(int)arg1;
- (void)_flyHeartProcess:(id)arg1 isSelf:(_Bool)arg2;
- (void)_cdTimeUpdate:(id)arg1;
- (void)_createColourPointLayer:(id)arg1;
- (void)_createHeartLayer:(id)arg1;
- (void)flyPointAnimation:(id)arg1 isSelf:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end

