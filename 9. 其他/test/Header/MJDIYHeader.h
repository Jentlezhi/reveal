//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MJRefreshHeader.h"

@class UIActivityIndicatorView, UIImageView, UILabel, UISwitch;

__attribute__((visibility("hidden")))
@interface MJDIYHeader : MJRefreshHeader
{
    UILabel *_label;
    UISwitch *_s;
    UIImageView *_logo;
    UIActivityIndicatorView *_loading;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIActivityIndicatorView *loading; // @synthesize loading=_loading;
@property(nonatomic) __weak UIImageView *logo; // @synthesize logo=_logo;
@property(nonatomic) __weak UISwitch *s; // @synthesize s=_s;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
- (void)setPullingPercent:(double)arg1;
- (void)setState:(long long)arg1;
- (void)scrollViewPanStateDidChange:(id)arg1;
- (void)scrollViewContentSizeDidChange:(id)arg1;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)placeSubviews;
- (void)prepare;

@end

