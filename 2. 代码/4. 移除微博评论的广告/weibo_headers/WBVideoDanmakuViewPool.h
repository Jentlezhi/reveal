//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WBVideoDanmakuViewPool : NSObject
{
    NSMutableDictionary *_reusableViews;
}

+ (id)mainPool;
- (void).cxx_destruct;
- (void)reclaimDanmakuViewForSprite:(id)arg1;
- (void)assembleDanmakuViewForSprite:(id)arg1;
- (id)viewClassifierForSprite:(id)arg1;
- (id)viewsForViewClassifier:(id)arg1;
- (void)dealloc;
- (void)clearReusableSpriteViews;
- (id)init;

@end

