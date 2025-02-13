//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UITableView, WBNLFansRedPacketSnatchResultPresenter, WBNLFansRedPacketSnatchResultTopListObject, WBNLFansRedPacketSnatchResultViewWinLabel, YXWBGradientFullControl;
@protocol WBNLFansRedPacketSnatchResultSubViewDelegate;

@interface WBNLFansRedPacketSnatchResultSubView : UIView
{
    _Bool _canSnatchAgain;
    UILabel *_titleLabel;
    WBNLFansRedPacketSnatchResultViewWinLabel *_winLabel;
    UILabel *_topListTitleLabel;
    UITableView *_topListTableView;
    WBNLFansRedPacketSnatchResultTopListObject *_listObject;
    YXWBGradientFullControl *_sendRedPacketBtn;
    YXWBGradientFullControl *_snatchAgainBtn;
    UILabel *_tipsLabel;
    id <WBNLFansRedPacketSnatchResultSubViewDelegate> _delegate;
    WBNLFansRedPacketSnatchResultPresenter *_presenter;
}

@property(retain, nonatomic) WBNLFansRedPacketSnatchResultPresenter *presenter; // @synthesize presenter=_presenter;
@property(nonatomic) __weak id <WBNLFansRedPacketSnatchResultSubViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool canSnatchAgain; // @synthesize canSnatchAgain=_canSnatchAgain;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) YXWBGradientFullControl *snatchAgainBtn; // @synthesize snatchAgainBtn=_snatchAgainBtn;
@property(retain, nonatomic) YXWBGradientFullControl *sendRedPacketBtn; // @synthesize sendRedPacketBtn=_sendRedPacketBtn;
@property(retain, nonatomic) WBNLFansRedPacketSnatchResultTopListObject *listObject; // @synthesize listObject=_listObject;
@property(retain, nonatomic) UITableView *topListTableView; // @synthesize topListTableView=_topListTableView;
@property(retain, nonatomic) UILabel *topListTitleLabel; // @synthesize topListTitleLabel=_topListTitleLabel;
@property(retain, nonatomic) WBNLFansRedPacketSnatchResultViewWinLabel *winLabel; // @synthesize winLabel=_winLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)snatchAgain:(id)arg1;
- (void)sendRedPacket:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

