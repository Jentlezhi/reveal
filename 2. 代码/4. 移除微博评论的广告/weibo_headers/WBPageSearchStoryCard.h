//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageMultiStoryCard.h"

@class NSString;

@interface WBPageSearchStoryCard : WBPageMultiStoryCard
{
    _Bool _showLike;
    _Bool _displayTitleArrow;
    _Bool _titleBold;
    NSString *_topicName;
    NSString *_labelUrl;
    NSString *_topicURlText;
    NSString *_topicUrl;
    NSString *_cardUrl;
}

+ (Class)viewClass;
@property(nonatomic) _Bool titleBold; // @synthesize titleBold=_titleBold;
@property(nonatomic) _Bool displayTitleArrow; // @synthesize displayTitleArrow=_displayTitleArrow;
@property(nonatomic) _Bool showLike; // @synthesize showLike=_showLike;
@property(retain, nonatomic) NSString *cardUrl; // @synthesize cardUrl=_cardUrl;
@property(retain, nonatomic) NSString *topicUrl; // @synthesize topicUrl=_topicUrl;
@property(retain, nonatomic) NSString *topicURlText; // @synthesize topicURlText=_topicURlText;
@property(retain, nonatomic) NSString *labelUrl; // @synthesize labelUrl=_labelUrl;
@property(retain, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

