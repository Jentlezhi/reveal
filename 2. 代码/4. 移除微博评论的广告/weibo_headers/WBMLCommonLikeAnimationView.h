//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSMutableArray, NSObject, NSString;

@interface WBMLCommonLikeAnimationView : UIView <CAAnimationDelegate>
{
    NSMutableArray *_usingImageView;
    NSMutableArray *_reuseImageViews;
    UIView *_animationView;
    NSObject *_impact;
    struct UIEdgeInsets _contentInset;
}

+ (void)backgroundLoadImage:(id)arg1;
+ (id)getImagesWithPrefix:(id)arg1;
+ (void)preloadImageWithTypes:(id)arg1;
@property(retain, nonatomic) NSObject *impact; // @synthesize impact=_impact;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) NSMutableArray *reuseImageViews; // @synthesize reuseImageViews=_reuseImageViews;
@property(retain, nonatomic) NSMutableArray *usingImageView; // @synthesize usingImageView=_usingImageView;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (void)imageViewToBeAvailable:(id)arg1;
- (id)getReuseImageView;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)showPraiseAnimationWithType:(unsigned long long)arg1 withBoomAndImpact:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

