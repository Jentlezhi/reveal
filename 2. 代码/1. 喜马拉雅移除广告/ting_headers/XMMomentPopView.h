//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface XMMomentPopView : UIView
{
    UILabel *_contentLabel;
    _Bool _isShow;
    _Bool _isLandscape;
}

@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
- (void).cxx_destruct;
- (void)showWithMessage:(id)arg1 color:(id)arg2 font:(id)arg3 inView:(id)arg4;
- (void)refreshWithMessage:(id)arg1 color:(id)arg2 font:(id)arg3;
- (void)dismissAfterDelay:(double)arg1;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)setupUnits;
- (id)init;

@end

