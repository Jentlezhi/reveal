//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView, WBTextField;

@interface WBVideoBottomToolBar : UIView
{
    WBTextField *textFieled;
    UIImageView *backgroundView;
    UIImageView *shadowImageView;
    NSMutableArray *itemViews;
    NSMutableArray *_items;
}

@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) WBTextField *textFieled; // @synthesize textFieled;
- (void).cxx_destruct;
- (void)refresh;
- (void)resetItemViews;
- (void)layoutSubviews;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2;
- (void)setBackgroundImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

