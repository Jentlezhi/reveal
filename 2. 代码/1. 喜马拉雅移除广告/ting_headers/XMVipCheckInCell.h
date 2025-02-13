//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

@class UIImageView, UILabel, XMVipCheckInItem, XMWebImageView;
@protocol XMVipCheckInDelegate;

@interface XMVipCheckInCell : XMTableViewCell
{
    XMVipCheckInItem *_checkInItem;
    id <XMVipCheckInDelegate> _delegate;
    XMWebImageView *_bgView;
    UILabel *_timeLabel;
    UILabel *_infoLabel;
    UIImageView *_calendarIV;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) UIImageView *calendarIV; // @synthesize calendarIV=_calendarIV;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) XMWebImageView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <XMVipCheckInDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XMVipCheckInItem *checkInItem; // @synthesize checkInItem=_checkInItem;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)p_handleButtonEvent;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)p_setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

