//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, XMSearchDeliveryModel, XMWebImageView;

@interface XMSpecialDeliveryCell : UITableViewCell
{
    XMWebImageView *_coverView;
    UILabel *_titleLabel;
    UILabel *_introLabel;
    XMSearchDeliveryModel *_model;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) XMSearchDeliveryModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) XMWebImageView *coverView; // @synthesize coverView=_coverView;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

