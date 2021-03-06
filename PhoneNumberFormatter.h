/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>


__attribute__((visibility("hidden")))
@interface PhoneNumberFormatter : NSObject {
}
+(id)numberStringFromPhoneNumberString:(id)phoneNumberString;
+(id)formatNumberForVoiceOver:(id)voiceOver;
+(id)clearNumber:(id)number;
+(BOOL)phoneNumber:(id)number meetsMinimumLengthRequirementOfCountry:(id)country;
+(id)formatLocalPhoneNumber:(id)number usingCountryInfo:(id)info;
+(id)formatLocalPhoneNumber:(id)number usingCountryCode:(id)code;
+(id)formatNumber:(id)number;
+(id)countryInfoByCountryCode:(id)code;
+(id)countryInfoByMCC:(id)mcc;
+(id)countryInfoByIsoCode:(id)code;
+(id)preferredCountries;
+(id)internalLoadAllCountries;
+(id)allCountries;
+(void)loadAsync;
+(id)removeDigits:(int)digits atEndOfString:(id)string;
+(id)formatNationalNumber:(id)number withCountryInfo:(id)countryInfo;
+(id)countryInfoFromNumber:(id)number;
+(id)countryInfoFromRawNumber:(id)rawNumber;
+(BOOL)nationalNumber:(id)number containsLeadingDigits:(id)digits;
@end

