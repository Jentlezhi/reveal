//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, UILabel, XMSearchSpecialModel;
@protocol XMSpecialTopCategoryCellDelegate;

@interface XMSpecialTopCategoryCell : UITableViewCell
{
    id <XMSpecialTopCategoryCellDelegate> _delegate;
    XMSearchSpecialModel *_model;
    NSMutableArray *_cardViews;
    UILabel *_titleLabel;
    UILabel *_countLabel;
}

+ (double)cardWidth;
+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSMutableArray *cardViews; // @synthesize cardViews=_cardViews;
@property(retain, nonatomic) XMSearchSpecialModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <XMSpecialTopCategoryCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)cardViewDidClick:(id)arg1;
- (void)moreDidClick;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

