//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLBaseModel.h"

@class NSString, WBNLDiversionCardConfigModel, WBNLDiversionMeetConfigModel, WBNLDiversionNobleConfigModel, WBNLDiversionPayConfigModel, WBNLDiversionReplayConfigModel, WBNLDiversionSeatConfigModel, WBNLDiversionTxtConfigModel, WBNLDiversiongGiftConfigModel, WBNLDiversiongRedPacketConfigModel, WBNLLiveOverConfigModel;

@interface WBNLDiversionConfigModel : WBNLBaseModel
{
    int _watch_duration;
    long long _diversion_duration;
    long long _diversion_frequency;
    NSString *_ios_download_url;
    NSString *_jump_url;
    WBNLDiversionTxtConfigModel *_txt;
    WBNLDiversionSeatConfigModel *_special_seat;
    WBNLDiversionPayConfigModel *_pay_panel;
    WBNLDiversionMeetConfigModel *_meet_talk;
    WBNLDiversionNobleConfigModel *_noble_gift;
    WBNLDiversionCardConfigModel *_card_bag;
    WBNLLiveOverConfigModel *_live_over;
    WBNLDiversiongRedPacketConfigModel *_red_coupon;
    double _show_layer;
    WBNLDiversiongGiftConfigModel *_gift_text;
    WBNLDiversionReplayConfigModel *_card_info;
}

@property(retain, nonatomic) WBNLDiversionReplayConfigModel *card_info; // @synthesize card_info=_card_info;
@property(copy, nonatomic) WBNLDiversiongGiftConfigModel *gift_text; // @synthesize gift_text=_gift_text;
@property(nonatomic) int watch_duration; // @synthesize watch_duration=_watch_duration;
@property(nonatomic) double show_layer; // @synthesize show_layer=_show_layer;
@property(retain, nonatomic) WBNLDiversiongRedPacketConfigModel *red_coupon; // @synthesize red_coupon=_red_coupon;
@property(copy, nonatomic) WBNLLiveOverConfigModel *live_over; // @synthesize live_over=_live_over;
@property(retain, nonatomic) WBNLDiversionCardConfigModel *card_bag; // @synthesize card_bag=_card_bag;
@property(retain, nonatomic) WBNLDiversionNobleConfigModel *noble_gift; // @synthesize noble_gift=_noble_gift;
@property(retain, nonatomic) WBNLDiversionMeetConfigModel *meet_talk; // @synthesize meet_talk=_meet_talk;
@property(retain, nonatomic) WBNLDiversionPayConfigModel *pay_panel; // @synthesize pay_panel=_pay_panel;
@property(copy, nonatomic) WBNLDiversionSeatConfigModel *special_seat; // @synthesize special_seat=_special_seat;
@property(copy, nonatomic) WBNLDiversionTxtConfigModel *txt; // @synthesize txt=_txt;
@property(copy, nonatomic) NSString *jump_url; // @synthesize jump_url=_jump_url;
@property(copy, nonatomic) NSString *ios_download_url; // @synthesize ios_download_url=_ios_download_url;
@property(nonatomic) long long diversion_frequency; // @synthesize diversion_frequency=_diversion_frequency;
@property(nonatomic) long long diversion_duration; // @synthesize diversion_duration=_diversion_duration;
- (void).cxx_destruct;

@end

