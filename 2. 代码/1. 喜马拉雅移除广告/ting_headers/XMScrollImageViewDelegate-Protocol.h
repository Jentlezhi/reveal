//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIColor, XMAdFocusImageItem, XMScrollImageView;

@protocol XMScrollImageViewDelegate <NSObject>

@optional
- (void)scrollImageView:(XMScrollImageView *)arg1 resetThemeColorWhenReload:(UIColor *)arg2;
- (void)scrollImageView:(XMScrollImageView *)arg1 scrollFromColor:(UIColor *)arg2 toColor:(UIColor *)arg3 withProgress:(double)arg4;
- (void)scrollImageView:(XMScrollImageView *)arg1 clickFocusItem:(XMAdFocusImageItem *)arg2 atIndex:(long long)arg3;
@end

