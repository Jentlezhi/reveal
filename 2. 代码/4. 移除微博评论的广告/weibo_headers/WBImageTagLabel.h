//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIView;

@interface WBImageTagLabel : UILabel
{
    UIView *_rightView;
    UIView *_leftView;
    _Bool _isExtend;
}

@property(nonatomic) _Bool isExtend; // @synthesize isExtend=_isExtend;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)sizeToFit;
- (void)setLeftView:(id)arg1;
- (void)setRightView:(id)arg1;

@end

