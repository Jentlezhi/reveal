//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel, UIView, XMChatAnimatedImageView, XMPSubscribeItem;
@protocol XMGSubscribeCellDelegate;

@interface XMGSubscribeCell : UITableViewCell
{
    XMPSubscribeItem *_item;
    id <XMGSubscribeCellDelegate> _delegate;
    UIView *_timeView;
    UILabel *_timeLabel;
    UIView *_bubble;
    UIButton *_coverButton;
    XMChatAnimatedImageView *_icon;
    UILabel *_nameLabel;
    UIView *_itemsView;
    long long _showCount;
    UILabel *_moreLabel;
    UIButton *_moreButton;
}

@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(nonatomic) long long showCount; // @synthesize showCount=_showCount;
@property(retain, nonatomic) UIView *itemsView; // @synthesize itemsView=_itemsView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) XMChatAnimatedImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIButton *coverButton; // @synthesize coverButton=_coverButton;
@property(retain, nonatomic) UIView *bubble; // @synthesize bubble=_bubble;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIView *timeView; // @synthesize timeView=_timeView;
@property(nonatomic) __weak id <XMGSubscribeCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XMPSubscribeItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)showMore;
- (void)updateMoreButton;
- (void)onClick:(id)arg1;
- (void)createSubButton:(long long)arg1;
- (void)updateSubscribeList;
- (void)onCover;
- (void)updateCover;
- (void)customInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

