//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

@class UIButton, UIImageView, UILabel, UIView, XMExchangeBindTextView, XMNPQADetailCellModel, XMWebImageButton;
@protocol XMNPQADetailCellDelegate;

@interface XMNPQADetailCell : XMTableViewCell
{
    id <XMNPQADetailCellDelegate> _delegate;
    XMExchangeBindTextView *_asker;
    UILabel *_listenedLB;
    UILabel *_askContentLB;
    XMWebImageButton *_headerBtn;
    UIImageView *_cornerIV;
    UIButton *_listeningBtn;
    UIImageView *_volumeIV;
    UILabel *_listeningLB;
    UILabel *_durationLB;
    UIView *_bottomLine;
    XMNPQADetailCellModel *_model;
}

+ (double)heightWithDatasource:(id)arg1;
+ (double)heightForCell:(id)arg1;
+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) XMNPQADetailCellModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *durationLB; // @synthesize durationLB=_durationLB;
@property(retain, nonatomic) UILabel *listeningLB; // @synthesize listeningLB=_listeningLB;
@property(retain, nonatomic) UIImageView *volumeIV; // @synthesize volumeIV=_volumeIV;
@property(retain, nonatomic) UIButton *listeningBtn; // @synthesize listeningBtn=_listeningBtn;
@property(retain, nonatomic) UIImageView *cornerIV; // @synthesize cornerIV=_cornerIV;
@property(retain, nonatomic) XMWebImageButton *headerBtn; // @synthesize headerBtn=_headerBtn;
@property(retain, nonatomic) UILabel *askContentLB; // @synthesize askContentLB=_askContentLB;
@property(retain, nonatomic) UILabel *listenedLB; // @synthesize listenedLB=_listenedLB;
@property(retain, nonatomic) XMExchangeBindTextView *asker; // @synthesize asker=_asker;
@property(nonatomic) __weak id <XMNPQADetailCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)listeningBtnTouchUpInside:(id)arg1;
- (void)headerBtnTouchUpInside:(id)arg1;
- (void)askerNicknameTouchUpInside:(id)arg1;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)layoutSubviewsWithDatasource:(id)arg1;
- (void)setDatasource:(id)arg1;
- (void)initWithSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

