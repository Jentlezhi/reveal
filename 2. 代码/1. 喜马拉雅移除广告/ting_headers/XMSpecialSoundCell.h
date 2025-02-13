//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, UIButton, UIImageView, UILabel, UIView, XMSpecialSoundItem, XMWebImageView;
@protocol XMSpecialSoundCellDelegate;

@interface XMSpecialSoundCell : UITableViewCell
{
    _Bool _useLongDivideLine;
    id <XMSpecialSoundCellDelegate> _delegate;
    XMWebImageView *_coverView;
    UILabel *_titleLabel;
    UILabel *_introLabel;
    UILabel *_createTimeLabel;
    UIView *_divideLine;
    UIView *_infosView;
    UIButton *_playButton;
    UIButton *_singleBuyButton;
    UIButton *_downloadButton;
    UIButton *_videoButton;
    UIImageView *_tonearmView;
    XMSpecialSoundItem *_soundItem;
    NSMutableArray *_tagsView;
}

+ (void)updateHeightToItem:(id)arg1;
+ (_Bool)haveHistoryWithItem:(id)arg1;
+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(nonatomic) _Bool useLongDivideLine; // @synthesize useLongDivideLine=_useLongDivideLine;
@property(retain, nonatomic) NSMutableArray *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) XMSpecialSoundItem *soundItem; // @synthesize soundItem=_soundItem;
@property(retain, nonatomic) UIImageView *tonearmView; // @synthesize tonearmView=_tonearmView;
@property(retain, nonatomic) UIButton *videoButton; // @synthesize videoButton=_videoButton;
@property(retain, nonatomic) UIButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) UIButton *singleBuyButton; // @synthesize singleBuyButton=_singleBuyButton;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIView *infosView; // @synthesize infosView=_infosView;
@property(retain, nonatomic) UIView *divideLine; // @synthesize divideLine=_divideLine;
@property(retain, nonatomic) UILabel *createTimeLabel; // @synthesize createTimeLabel=_createTimeLabel;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) XMWebImageView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) __weak id <XMSpecialSoundCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)videoButtonDidClick;
- (void)downloadButtonDidClick;
- (void)singleBuyButtonDidClick;
- (void)playButtonDidClick;
- (void)longPress:(id)arg1;
- (void)layoutSubviews;
- (void)updateTags;
- (void)updateInfos;
- (void)updateDownloadButton;
- (void)endPlayingRoll;
- (void)startPlayingRoll;
- (void)updatePlayButtonState;
- (void)setupPlayerStateObserver;
- (void)setup;
- (void)setupNotification;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

