//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBFCLBaseCell.h"

@class TTTAttributedLabel, UIActivityIndicatorView, UIButton, UIControl, UIImageView, UIView, WBLineView;

@interface WBOccupiedCell : WBFCLBaseCell
{
    UIControl *occupiedControl;
    WBLineView *leftLine;
    WBLineView *rightLine;
    UIView *bottomLine;
    UIButton *middleImageView;
    TTTAttributedLabel *contentLabel;
    UIImageView *arrowImageView;
    UIActivityIndicatorView *activityIndicatorView;
}

- (void).cxx_destruct;
- (void)occupiedAction:(id)arg1;
- (void)configStyleEntity:(id)arg1;
- (void)setupCellData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

