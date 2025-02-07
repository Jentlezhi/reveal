//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel, UIView, XMLiveDynamicItem, XMWebImageView;
@protocol XMLiveDynamicItemCellDelegate;

@interface XMLiveDynamicItemCell : UITableViewCell
{
    id <XMLiveDynamicItemCellDelegate> _delegate;
    XMLiveDynamicItem *_dynamicItem;
    XMWebImageView *_headImage;
    UILabel *_titleLabel;
    UILabel *_middleLabel;
    UILabel *_detailLabel;
    UIButton *_moreButton;
    UIView *_line;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *middleLabel; // @synthesize middleLabel=_middleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) XMWebImageView *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) XMLiveDynamicItem *dynamicItem; // @synthesize dynamicItem=_dynamicItem;
@property(nonatomic) __weak id <XMLiveDynamicItemCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateLiveDynamicItem:(id)arg1;
- (void)onHeadImageClick:(id)arg1;
- (void)makeCellConstraints;
- (void)customInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

