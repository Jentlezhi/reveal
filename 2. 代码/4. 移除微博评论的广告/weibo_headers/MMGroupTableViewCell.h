//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMChatTableViewCell.h"

@class NSString, UIImageView, UILabel;

@interface MMGroupTableViewCell : MMChatTableViewCell
{
    UIImageView *_dotView;
    UIImageView *_muteView;
    UILabel *_atLabel;
    UILabel *_bulletinLabel;
    double _detailNecessaryWidth;
    NSString *_detailNecessaryText;
    NSString *_originalAirBorneText;
    NSString *_originalDetailText;
}

@property(copy, nonatomic) NSString *originalDetailText; // @synthesize originalDetailText=_originalDetailText;
@property(copy, nonatomic) NSString *originalAirBorneText; // @synthesize originalAirBorneText=_originalAirBorneText;
@property(copy, nonatomic) NSString *detailNecessaryText; // @synthesize detailNecessaryText=_detailNecessaryText;
@property(nonatomic) double detailNecessaryWidth; // @synthesize detailNecessaryWidth=_detailNecessaryWidth;
@property(retain, nonatomic) UILabel *bulletinLabel; // @synthesize bulletinLabel=_bulletinLabel;
@property(retain, nonatomic) UILabel *atLabel; // @synthesize atLabel=_atLabel;
@property(retain, nonatomic) UIImageView *muteView; // @synthesize muteView=_muteView;
@property(retain, nonatomic) UIImageView *dotView; // @synthesize dotView=_dotView;
- (void).cxx_destruct;
- (void)dotViewDestory;
- (id)accessibilityLabel;
- (void)prepareForReuse;
- (void)avatarViewPressed:(id)arg1;
- (void)layoutSubviews;
- (void)setConversation:(id)arg1;
- (id)_airBorneTextWithMaxWidth:(double *)arg1;
- (void)setDefaultAvatarImage;
- (_Bool)shouldDisplayUnreadCountLabel;
- (_Bool)shouldDisplayBulletinLabel;
- (void)setAvatarViewImage:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

