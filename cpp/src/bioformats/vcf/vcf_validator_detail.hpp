
#line 1 "vcf_v41.ragel"
#include <cstdio>

#include "vcf_validator.hpp"


#line 318 "vcf_v41.ragel"


namespace
{
  
#line 15 "vcf_validator_detail.hpp"
static const int vcf_start = 1;
static const int vcf_first_final = 150;
static const int vcf_error = 0;

static const int vcf_en_main = 1;
static const int vcf_en_main_meta_section = 20;
static const int vcf_en_main_body_section = 151;
static const int vcf_en_meta_section_skip = 148;
static const int vcf_en_body_section_skip = 149;


#line 324 "vcf_v41.ragel"

}

namespace opencb
{
  namespace vcf
  {
    template <typename Configuration>
    Parser<Configuration>::Parser()
    {
      
#line 39 "vcf_validator_detail.hpp"
	{
	cs = vcf_start;
	}

#line 336 "vcf_v41.ragel"

    }

    template <typename Configuration>
    void Parser<Configuration>::parse(std::vector<char> const & text)
    {
      char const * p = &text[0];
      char const * pe = &text[0] + text.size();
      char const * eof = nullptr;

      parse_buffer(p, pe, eof);
    }

    template <typename Configuration>
    void Parser<Configuration>::parse(std::string const & text)
    {
      char const * p = text.data();
      char const * pe = text.data() + text.size();
      char const * eof = nullptr;

      parse_buffer(p, pe, eof);
    }

    template <typename Configuration>
    void Parser<Configuration>::end()
    {
      char const * empty = "";
      parse_buffer(empty, empty, empty);
    }

    template <typename Configuration>
    bool Parser<Configuration>::is_valid() const
    {
      return cs >= 
#line 79 "vcf_validator_detail.hpp"
150
#line 369 "vcf_v41.ragel"
;
    }

    template <typename Configuration>
    void Parser<Configuration>::parse_buffer(char const * p, char const * pe, char const * eof)
    {
      char const * ts = nullptr;
      char const * te = nullptr;

      
#line 92 "vcf_validator_detail.hpp"
	{
	if ( p == pe )
		goto _test_eof;
	switch ( cs )
	{
case 1:
	if ( (*p) == 35 )
		goto st2;
	goto tr0;
tr0:
#line 29 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_fileformat_section_error(*this);
        p--; {goto st148;}
    }
	goto st0;
tr14:
#line 53 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_fileformat_section_error(*this,
            "Fileformat must be a sequence of alphanumeric and/or punctuation characters");
        p--; {goto st148;}
    }
#line 29 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_fileformat_section_error(*this);
        p--; {goto st148;}
    }
	goto st0;
tr18:
#line 29 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_fileformat_section_error(*this);
        p--; {goto st148;}
    }
#line 34 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st148;}
    }
#line 39 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_header_section_error(*this);
        p--; {goto st149;}
    }
	goto st0;
tr20:
#line 34 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st148;}
    }
#line 39 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_header_section_error(*this);
        p--; {goto st149;}
    }
	goto st0;
tr23:
#line 34 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st148;}
    }
	goto st0;
tr38:
#line 39 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_header_section_error(*this);
        p--; {goto st149;}
    }
	goto st0;
tr88:
#line 124 "vcf_v41.ragel"
	{
    }
#line 44 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st149;}
    }
	goto st0;
tr91:
#line 133 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Position must be a positive number");
        p--; {goto st149;}
    }
#line 44 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st149;}
    }
	goto st0;
tr95:
#line 142 "vcf_v41.ragel"
	{
        printf("Line %zu: Error in 'id' field\n", n_lines);
 //       vcf_record_free(status->current_record);
    }
#line 44 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st149;}
    }
	goto st0;
tr99:
#line 151 "vcf_v41.ragel"
	{
        printf("Line %zu: Error in 'reference' field\n", n_lines);
//        vcf_record_free(status->current_record);
    }
#line 44 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st149;}
    }
	goto st0;
tr103:
#line 176 "vcf_v41.ragel"
	{
        printf("Line %zu: Error in 'alternate' field\n", n_lines);
 //       vcf_record_free(status->current_record);
    }
#line 44 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st149;}
    }
	goto st0;
tr113:
#line 191 "vcf_v41.ragel"
	{
        printf("Line %zu: Error in 'quality' field\n", n_lines);
 //       vcf_record_free(status->current_record);
    }
#line 44 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st149;}
    }
	goto st0;
tr117:
#line 200 "vcf_v41.ragel"
	{
        printf("Line %zu: Error in 'filter' field\n", n_lines);
 //       vcf_record_free(status->current_record);
    }
#line 44 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st149;}
    }
	goto st0;
tr122:
#line 209 "vcf_v41.ragel"
	{
        printf("Line %zu: Error in 'info' field\n", n_lines);
 //       vcf_record_free(status->current_record);
    }
#line 44 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st149;}
    }
	goto st0;
tr129:
#line 218 "vcf_v41.ragel"
	{
        printf("Line %zu: Error in 'format' field\n", n_lines);
 //       vcf_record_free(status->current_record);
    }
#line 44 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st149;}
    }
	goto st0;
tr134:
#line 227 "vcf_v41.ragel"
	{
        printf("Line %zu: Error in sample\n", n_lines);
//        vcf_record_free(status->current_record);
    }
#line 44 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st149;}
    }
	goto st0;
tr192:
#line 39 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_header_section_error(*this);
        p--; {goto st149;}
    }
#line 124 "vcf_v41.ragel"
	{
    }
#line 44 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st149;}
    }
	goto st0;
#line 298 "vcf_validator_detail.hpp"
st0:
cs = 0;
	goto _out;
st2:
	if ( ++p == pe )
		goto _test_eof2;
case 2:
	if ( (*p) == 35 )
		goto st3;
	goto tr0;
st3:
	if ( ++p == pe )
		goto _test_eof3;
case 3:
	if ( (*p) == 102 )
		goto st4;
	goto tr0;
st4:
	if ( ++p == pe )
		goto _test_eof4;
case 4:
	if ( (*p) == 105 )
		goto st5;
	goto tr0;
st5:
	if ( ++p == pe )
		goto _test_eof5;
case 5:
	if ( (*p) == 108 )
		goto st6;
	goto tr0;
st6:
	if ( ++p == pe )
		goto _test_eof6;
case 6:
	if ( (*p) == 101 )
		goto st7;
	goto tr0;
st7:
	if ( ++p == pe )
		goto _test_eof7;
case 7:
	if ( (*p) == 102 )
		goto st8;
	goto tr0;
st8:
	if ( ++p == pe )
		goto _test_eof8;
case 8:
	if ( (*p) == 111 )
		goto st9;
	goto tr0;
st9:
	if ( ++p == pe )
		goto _test_eof9;
case 9:
	if ( (*p) == 114 )
		goto st10;
	goto tr0;
st10:
	if ( ++p == pe )
		goto _test_eof10;
case 10:
	if ( (*p) == 109 )
		goto st11;
	goto tr0;
st11:
	if ( ++p == pe )
		goto _test_eof11;
case 11:
	if ( (*p) == 97 )
		goto st12;
	goto tr0;
st12:
	if ( ++p == pe )
		goto _test_eof12;
case 12:
	if ( (*p) == 116 )
		goto st13;
	goto tr0;
st13:
	if ( ++p == pe )
		goto _test_eof13;
case 13:
	if ( (*p) == 61 )
		goto st14;
	goto tr0;
st14:
	if ( ++p == pe )
		goto _test_eof14;
case 14:
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr15;
	goto tr14;
tr15:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st15;
st15:
	if ( ++p == pe )
		goto _test_eof15;
case 15:
#line 403 "vcf_validator_detail.hpp"
	if ( (*p) == 10 )
		goto tr16;
	if ( 33 <= (*p) && (*p) <= 126 )
		goto st15;
	goto tr14;
tr16:
#line 49 "vcf_v41.ragel"
	{
//        set_vcf_file_format(ts, p-ts, file);
    }
#line 20 "vcf_v41.ragel"
	{
        ++n_lines;
        n_columns = 1;
    }
	goto st16;
st16:
	if ( ++p == pe )
		goto _test_eof16;
case 16:
#line 424 "vcf_validator_detail.hpp"
	if ( (*p) == 35 )
		goto tr19;
	goto tr18;
tr19:
#line 59 "vcf_v41.ragel"
	{
//        printf("Reading meta entry\n");
//        status->current_meta_entry = vcf_meta_entry_new();
    }
	goto st17;
st17:
	if ( ++p == pe )
		goto _test_eof17;
case 17:
#line 439 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 35: goto st18;
		case 67: goto st28;
	}
	goto tr20;
st18:
	if ( ++p == pe )
		goto _test_eof18;
case 18:
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto tr24;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr24;
		} else
			goto tr25;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto tr24;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto tr24;
		} else
			goto tr25;
	} else
		goto tr25;
	goto tr23;
tr24:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st19;
st19:
	if ( ++p == pe )
		goto _test_eof19;
case 19:
#line 480 "vcf_validator_detail.hpp"
	if ( (*p) == 10 )
		goto tr26;
	if ( 32 <= (*p) && (*p) <= 126 )
		goto st19;
	goto tr23;
tr26:
#line 72 "vcf_v41.ragel"
	{
/*        if (*ts == '<') {
            add_vcf_meta_entry_value(ts+1, p-ts-1, status->current_meta_entry);
        } else if (*(p-1) == '>') {
            add_vcf_meta_entry_value(ts, p-ts-1, status->current_meta_entry);
        } else {
            add_vcf_meta_entry_value(ts, p-ts, status->current_meta_entry);
        }*/
    }
#line 64 "vcf_v41.ragel"
	{
//        add_vcf_meta_entry(status->current_meta_entry, file);
    }
#line 20 "vcf_v41.ragel"
	{
        ++n_lines;
        n_columns = 1;
    }
	goto st20;
st20:
	if ( ++p == pe )
		goto _test_eof20;
case 20:
#line 511 "vcf_validator_detail.hpp"
	if ( (*p) == 35 )
		goto tr19;
	goto tr20;
tr25:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st21;
st21:
	if ( ++p == pe )
		goto _test_eof21;
case 21:
#line 525 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr26;
		case 61: goto tr29;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto st19;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto st19;
		} else
			goto st21;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto st19;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto st19;
		} else
			goto st21;
	} else
		goto st21;
	goto tr23;
tr29:
#line 68 "vcf_v41.ragel"
	{
//        set_vcf_meta_entry_name(ts, p-ts, status->current_meta_entry);
    }
	goto st22;
st22:
	if ( ++p == pe )
		goto _test_eof22;
case 22:
#line 561 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr26;
		case 60: goto st23;
	}
	if ( 32 <= (*p) && (*p) <= 126 )
		goto st19;
	goto tr23;
st23:
	if ( ++p == pe )
		goto _test_eof23;
case 23:
	if ( (*p) == 10 )
		goto tr26;
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto st19;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto st19;
		} else
			goto tr31;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto st19;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto st19;
		} else
			goto tr31;
	} else
		goto tr31;
	goto tr23;
tr31:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st24;
st24:
	if ( ++p == pe )
		goto _test_eof24;
case 24:
#line 606 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr26;
		case 61: goto st25;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto st19;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto st19;
		} else
			goto st24;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto st19;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto st19;
		} else
			goto st24;
	} else
		goto st24;
	goto tr23;
st25:
	if ( ++p == pe )
		goto _test_eof25;
case 25:
	if ( (*p) == 10 )
		goto tr26;
	if ( 32 <= (*p) && (*p) <= 126 )
		goto st26;
	goto tr23;
tr37:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st26;
tr36:
#line 72 "vcf_v41.ragel"
	{
/*        if (*ts == '<') {
            add_vcf_meta_entry_value(ts+1, p-ts-1, status->current_meta_entry);
        } else if (*(p-1) == '>') {
            add_vcf_meta_entry_value(ts, p-ts-1, status->current_meta_entry);
        } else {
            add_vcf_meta_entry_value(ts, p-ts, status->current_meta_entry);
        }*/
    }
	goto st26;
st26:
	if ( ++p == pe )
		goto _test_eof26;
case 26:
#line 663 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr26;
		case 44: goto tr35;
		case 62: goto tr36;
	}
	if ( 32 <= (*p) && (*p) <= 126 )
		goto st26;
	goto tr23;
tr35:
#line 72 "vcf_v41.ragel"
	{
/*        if (*ts == '<') {
            add_vcf_meta_entry_value(ts+1, p-ts-1, status->current_meta_entry);
        } else if (*(p-1) == '>') {
            add_vcf_meta_entry_value(ts, p-ts-1, status->current_meta_entry);
        } else {
            add_vcf_meta_entry_value(ts, p-ts, status->current_meta_entry);
        }*/
    }
	goto st27;
st27:
	if ( ++p == pe )
		goto _test_eof27;
case 27:
#line 688 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 10: goto tr26;
		case 44: goto tr35;
		case 62: goto tr36;
	}
	if ( (*p) < 65 ) {
		if ( (*p) < 48 ) {
			if ( 32 <= (*p) && (*p) <= 47 )
				goto st26;
		} else if ( (*p) > 57 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto st26;
		} else
			goto tr37;
	} else if ( (*p) > 90 ) {
		if ( (*p) < 97 ) {
			if ( 91 <= (*p) && (*p) <= 96 )
				goto st26;
		} else if ( (*p) > 122 ) {
			if ( 123 <= (*p) && (*p) <= 126 )
				goto st26;
		} else
			goto tr37;
	} else
		goto tr37;
	goto tr23;
st28:
	if ( ++p == pe )
		goto _test_eof28;
case 28:
	if ( (*p) == 72 )
		goto st29;
	goto tr38;
st29:
	if ( ++p == pe )
		goto _test_eof29;
case 29:
	if ( (*p) == 82 )
		goto st30;
	goto tr38;
st30:
	if ( ++p == pe )
		goto _test_eof30;
case 30:
	if ( (*p) == 79 )
		goto st31;
	goto tr38;
st31:
	if ( ++p == pe )
		goto _test_eof31;
case 31:
	if ( (*p) == 77 )
		goto st32;
	goto tr38;
st32:
	if ( ++p == pe )
		goto _test_eof32;
case 32:
	if ( (*p) == 9 )
		goto st33;
	goto tr38;
st33:
	if ( ++p == pe )
		goto _test_eof33;
case 33:
	if ( (*p) == 80 )
		goto st34;
	goto tr38;
st34:
	if ( ++p == pe )
		goto _test_eof34;
case 34:
	if ( (*p) == 79 )
		goto st35;
	goto tr38;
st35:
	if ( ++p == pe )
		goto _test_eof35;
case 35:
	if ( (*p) == 83 )
		goto st36;
	goto tr38;
st36:
	if ( ++p == pe )
		goto _test_eof36;
case 36:
	if ( (*p) == 9 )
		goto st37;
	goto tr38;
st37:
	if ( ++p == pe )
		goto _test_eof37;
case 37:
	if ( (*p) == 73 )
		goto st38;
	goto tr38;
st38:
	if ( ++p == pe )
		goto _test_eof38;
case 38:
	if ( (*p) == 68 )
		goto st39;
	goto tr38;
st39:
	if ( ++p == pe )
		goto _test_eof39;
case 39:
	if ( (*p) == 9 )
		goto st40;
	goto tr38;
st40:
	if ( ++p == pe )
		goto _test_eof40;
case 40:
	if ( (*p) == 82 )
		goto st41;
	goto tr38;
st41:
	if ( ++p == pe )
		goto _test_eof41;
case 41:
	if ( (*p) == 69 )
		goto st42;
	goto tr38;
st42:
	if ( ++p == pe )
		goto _test_eof42;
case 42:
	if ( (*p) == 70 )
		goto st43;
	goto tr38;
st43:
	if ( ++p == pe )
		goto _test_eof43;
case 43:
	if ( (*p) == 9 )
		goto st44;
	goto tr38;
st44:
	if ( ++p == pe )
		goto _test_eof44;
case 44:
	if ( (*p) == 65 )
		goto st45;
	goto tr38;
st45:
	if ( ++p == pe )
		goto _test_eof45;
case 45:
	if ( (*p) == 76 )
		goto st46;
	goto tr38;
st46:
	if ( ++p == pe )
		goto _test_eof46;
case 46:
	if ( (*p) == 84 )
		goto st47;
	goto tr38;
st47:
	if ( ++p == pe )
		goto _test_eof47;
case 47:
	if ( (*p) == 9 )
		goto st48;
	goto tr38;
st48:
	if ( ++p == pe )
		goto _test_eof48;
case 48:
	if ( (*p) == 81 )
		goto st49;
	goto tr38;
st49:
	if ( ++p == pe )
		goto _test_eof49;
case 49:
	if ( (*p) == 85 )
		goto st50;
	goto tr38;
st50:
	if ( ++p == pe )
		goto _test_eof50;
case 50:
	if ( (*p) == 65 )
		goto st51;
	goto tr38;
st51:
	if ( ++p == pe )
		goto _test_eof51;
case 51:
	if ( (*p) == 76 )
		goto st52;
	goto tr38;
st52:
	if ( ++p == pe )
		goto _test_eof52;
case 52:
	if ( (*p) == 9 )
		goto st53;
	goto tr38;
st53:
	if ( ++p == pe )
		goto _test_eof53;
case 53:
	if ( (*p) == 70 )
		goto st54;
	goto tr38;
st54:
	if ( ++p == pe )
		goto _test_eof54;
case 54:
	if ( (*p) == 73 )
		goto st55;
	goto tr38;
st55:
	if ( ++p == pe )
		goto _test_eof55;
case 55:
	if ( (*p) == 76 )
		goto st56;
	goto tr38;
st56:
	if ( ++p == pe )
		goto _test_eof56;
case 56:
	if ( (*p) == 84 )
		goto st57;
	goto tr38;
st57:
	if ( ++p == pe )
		goto _test_eof57;
case 57:
	if ( (*p) == 69 )
		goto st58;
	goto tr38;
st58:
	if ( ++p == pe )
		goto _test_eof58;
case 58:
	if ( (*p) == 82 )
		goto st59;
	goto tr38;
st59:
	if ( ++p == pe )
		goto _test_eof59;
case 59:
	if ( (*p) == 9 )
		goto st60;
	goto tr38;
st60:
	if ( ++p == pe )
		goto _test_eof60;
case 60:
	if ( (*p) == 73 )
		goto st61;
	goto tr38;
st61:
	if ( ++p == pe )
		goto _test_eof61;
case 61:
	if ( (*p) == 78 )
		goto st62;
	goto tr38;
st62:
	if ( ++p == pe )
		goto _test_eof62;
case 62:
	if ( (*p) == 70 )
		goto st63;
	goto tr38;
st63:
	if ( ++p == pe )
		goto _test_eof63;
case 63:
	if ( (*p) == 79 )
		goto st64;
	goto tr38;
st64:
	if ( ++p == pe )
		goto _test_eof64;
case 64:
	switch( (*p) ) {
		case 9: goto st65;
		case 10: goto tr76;
	}
	goto tr38;
st65:
	if ( ++p == pe )
		goto _test_eof65;
case 65:
	if ( (*p) == 70 )
		goto st66;
	goto tr38;
st66:
	if ( ++p == pe )
		goto _test_eof66;
case 66:
	if ( (*p) == 79 )
		goto st67;
	goto tr38;
st67:
	if ( ++p == pe )
		goto _test_eof67;
case 67:
	if ( (*p) == 82 )
		goto st68;
	goto tr38;
st68:
	if ( ++p == pe )
		goto _test_eof68;
case 68:
	if ( (*p) == 77 )
		goto st69;
	goto tr38;
st69:
	if ( ++p == pe )
		goto _test_eof69;
case 69:
	if ( (*p) == 65 )
		goto st70;
	goto tr38;
st70:
	if ( ++p == pe )
		goto _test_eof70;
case 70:
	if ( (*p) == 84 )
		goto st71;
	goto tr38;
st71:
	if ( ++p == pe )
		goto _test_eof71;
case 71:
	if ( (*p) == 9 )
		goto st72;
	goto tr38;
tr85:
#line 87 "vcf_v41.ragel"
	{
//        add_vcf_sample_name(ts, p-ts, file);
    }
	goto st72;
st72:
	if ( ++p == pe )
		goto _test_eof72;
case 72:
#line 1035 "vcf_validator_detail.hpp"
	if ( 32 <= (*p) && (*p) <= 126 )
		goto tr84;
	goto tr38;
tr84:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st73;
st73:
	if ( ++p == pe )
		goto _test_eof73;
case 73:
#line 1049 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr85;
		case 10: goto tr86;
	}
	if ( 32 <= (*p) && (*p) <= 126 )
		goto st73;
	goto tr38;
tr76:
#line 20 "vcf_v41.ragel"
	{
        ++n_lines;
        n_columns = 1;
    }
	goto st150;
tr86:
#line 87 "vcf_v41.ragel"
	{
//        add_vcf_sample_name(ts, p-ts, file);
    }
#line 20 "vcf_v41.ragel"
	{
        ++n_lines;
        n_columns = 1;
    }
	goto st150;
st150:
	if ( ++p == pe )
		goto _test_eof150;
case 150:
#line 1079 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 44: goto tr193;
		case 46: goto tr193;
		case 95: goto tr193;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr193;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr193;
	} else
		goto tr193;
	goto tr192;
tr193:
#line 91 "vcf_v41.ragel"
	{
//        status->current_record = vcf_record_new();
//        printf("Reading record\n");
    }
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st74;
st74:
	if ( ++p == pe )
		goto _test_eof74;
case 74:
#line 1109 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr89;
		case 44: goto st74;
		case 46: goto st74;
		case 95: goto st74;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st74;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st74;
	} else
		goto st74;
	goto tr88;
tr89:
#line 120 "vcf_v41.ragel"
	{
//        set_vcf_record_chromosome(ts, p-ts, status->current_record);
    }
#line 25 "vcf_v41.ragel"
	{
        ++n_columns;
    }
	goto st75;
st75:
	if ( ++p == pe )
		goto _test_eof75;
case 75:
#line 1139 "vcf_validator_detail.hpp"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr92;
	goto tr91;
tr92:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st76;
st76:
	if ( ++p == pe )
		goto _test_eof76;
case 76:
#line 1153 "vcf_validator_detail.hpp"
	if ( (*p) == 9 )
		goto tr93;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st76;
	goto tr91;
tr93:
#line 127 "vcf_v41.ragel"
	{
//        char *field = strndup(ts, p-ts);
 //       set_vcf_record_position(atol(field), status->current_record);
 //       free(field);
    }
#line 25 "vcf_v41.ragel"
	{
        ++n_columns;
    }
	goto st77;
st77:
	if ( ++p == pe )
		goto _test_eof77;
case 77:
#line 1175 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 46: goto tr96;
		case 95: goto tr97;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr97;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr97;
	} else
		goto tr97;
	goto tr95;
tr96:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st78;
st78:
	if ( ++p == pe )
		goto _test_eof78;
case 78:
#line 1199 "vcf_validator_detail.hpp"
	if ( (*p) == 9 )
		goto tr98;
	goto tr95;
tr98:
#line 138 "vcf_v41.ragel"
	{
//        set_vcf_record_id(ts, p-ts, status->current_record);
    }
#line 25 "vcf_v41.ragel"
	{
        ++n_columns;
    }
	goto st79;
st79:
	if ( ++p == pe )
		goto _test_eof79;
case 79:
#line 1217 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 65: goto tr100;
		case 67: goto tr100;
		case 71: goto tr100;
		case 78: goto tr100;
		case 84: goto tr100;
	}
	goto tr99;
tr100:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st80;
st80:
	if ( ++p == pe )
		goto _test_eof80;
case 80:
#line 1236 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr101;
		case 65: goto st80;
		case 67: goto st80;
		case 71: goto st80;
		case 78: goto st80;
		case 84: goto st80;
	}
	goto tr99;
tr101:
#line 147 "vcf_v41.ragel"
	{
 //       set_vcf_record_reference(ts, p-ts, status->current_record);
    }
#line 25 "vcf_v41.ragel"
	{
        ++n_columns;
    }
	goto st81;
st81:
	if ( ++p == pe )
		goto _test_eof81;
case 81:
#line 1260 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 46: goto tr104;
		case 48: goto tr105;
		case 60: goto tr106;
		case 65: goto tr107;
		case 67: goto tr107;
		case 71: goto tr107;
		case 78: goto tr107;
		case 84: goto tr107;
		case 91: goto tr108;
		case 93: goto tr109;
	}
	goto tr103;
tr104:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st82;
st82:
	if ( ++p == pe )
		goto _test_eof82;
case 82:
#line 1284 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr110;
		case 44: goto st102;
		case 46: goto st82;
		case 65: goto st82;
		case 67: goto st82;
		case 71: goto st82;
		case 78: goto st82;
		case 84: goto st82;
	}
	goto tr103;
tr110:
#line 164 "vcf_v41.ragel"
	{
 //       set_vcf_record_type(VARIANT_SNV, status->current_record);
    }
#line 156 "vcf_v41.ragel"
	{
 /*       if (!strncmp("0", ts, 1)) {
            set_vcf_record_alternate(".", 1, status->current_record);
        } else {
            set_vcf_record_alternate(ts, p-ts, status->current_record);
        }*/
    }
#line 25 "vcf_v41.ragel"
	{
        ++n_columns;
    }
	goto st83;
tr151:
#line 168 "vcf_v41.ragel"
	{
 //       set_vcf_record_type(VARIANT_INDEL, status->current_record);
    }
#line 156 "vcf_v41.ragel"
	{
 /*       if (!strncmp("0", ts, 1)) {
            set_vcf_record_alternate(".", 1, status->current_record);
        } else {
            set_vcf_record_alternate(ts, p-ts, status->current_record);
        }*/
    }
#line 25 "vcf_v41.ragel"
	{
        ++n_columns;
    }
	goto st83;
tr175:
#line 172 "vcf_v41.ragel"
	{
 //       set_vcf_record_type(VARIANT_SV, status->current_record);
    }
#line 156 "vcf_v41.ragel"
	{
 /*       if (!strncmp("0", ts, 1)) {
            set_vcf_record_alternate(".", 1, status->current_record);
        } else {
            set_vcf_record_alternate(ts, p-ts, status->current_record);
        }*/
    }
#line 25 "vcf_v41.ragel"
	{
        ++n_columns;
    }
	goto st83;
st83:
	if ( ++p == pe )
		goto _test_eof83;
case 83:
#line 1354 "vcf_validator_detail.hpp"
	if ( (*p) == 46 )
		goto tr114;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr115;
	goto tr113;
tr114:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st84;
st84:
	if ( ++p == pe )
		goto _test_eof84;
case 84:
#line 1370 "vcf_validator_detail.hpp"
	if ( (*p) == 9 )
		goto tr116;
	goto tr113;
tr116:
#line 181 "vcf_v41.ragel"
	{
/*        float quality = -1.0f;
        if (strncmp(".", ts, 1) != 0) {
            char *field = strndup(ts, p-ts);
            quality = atof(field);
            free(field);
        }
        set_vcf_record_quality(quality, status->current_record);*/
    }
#line 25 "vcf_v41.ragel"
	{
        ++n_columns;
    }
	goto st85;
st85:
	if ( ++p == pe )
		goto _test_eof85;
case 85:
#line 1394 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 44: goto tr118;
		case 46: goto tr118;
		case 95: goto tr118;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr118;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr118;
	} else
		goto tr118;
	goto tr117;
tr118:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st86;
st86:
	if ( ++p == pe )
		goto _test_eof86;
case 86:
#line 1419 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr119;
		case 44: goto st86;
		case 46: goto st86;
		case 59: goto st98;
		case 95: goto st86;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st86;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st86;
	} else
		goto st86;
	goto tr117;
tr119:
#line 196 "vcf_v41.ragel"
	{
 //       set_vcf_record_filter(ts, p-ts, status->current_record);
    }
#line 25 "vcf_v41.ragel"
	{
        ++n_columns;
    }
	goto st87;
st87:
	if ( ++p == pe )
		goto _test_eof87;
case 87:
#line 1450 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 46: goto tr123;
		case 95: goto tr124;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr124;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr124;
	} else
		goto tr124;
	goto tr122;
tr123:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st88;
st88:
	if ( ++p == pe )
		goto _test_eof88;
case 88:
#line 1474 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr125;
		case 10: goto tr126;
		case 59: goto st94;
		case 61: goto st96;
	}
	goto tr122;
tr125:
#line 205 "vcf_v41.ragel"
	{
//        set_vcf_record_info(ts, p-ts, status->current_record);
    }
#line 25 "vcf_v41.ragel"
	{
        ++n_columns;
    }
	goto st89;
st89:
	if ( ++p == pe )
		goto _test_eof89;
case 89:
#line 1496 "vcf_validator_detail.hpp"
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr130;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr130;
	} else
		goto tr130;
	goto tr129;
tr130:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st90;
st90:
	if ( ++p == pe )
		goto _test_eof90;
case 90:
#line 1516 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr131;
		case 58: goto st93;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st90;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st90;
	} else
		goto st90;
	goto tr129;
tr131:
#line 214 "vcf_v41.ragel"
	{
 //       set_vcf_record_format(ts, p-ts, status->current_record);
    }
#line 25 "vcf_v41.ragel"
	{
        ++n_columns;
    }
	goto st91;
tr136:
#line 223 "vcf_v41.ragel"
	{
//        add_vcf_record_sample(ts, p-ts, status->current_record);
    }
#line 25 "vcf_v41.ragel"
	{
        ++n_columns;
    }
	goto st91;
st91:
	if ( ++p == pe )
		goto _test_eof91;
case 91:
#line 1554 "vcf_validator_detail.hpp"
	if ( 33 <= (*p) && (*p) <= 126 )
		goto tr135;
	goto tr134;
tr135:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st92;
st92:
	if ( ++p == pe )
		goto _test_eof92;
case 92:
#line 1568 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr136;
		case 10: goto tr137;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto st92;
	goto tr134;
tr126:
#line 205 "vcf_v41.ragel"
	{
//        set_vcf_record_info(ts, p-ts, status->current_record);
    }
#line 96 "vcf_v41.ragel"
	{
/*        // If batch is full, add to the list of batches and create a new, empty one
        if (batch_size > 0 && status->current_batch->records->size == batch_size)
        {
            add_vcf_batch(status->current_batch, file);
            LOG_DEBUG_F("Batch %d added - %zu records\t", batches, status->current_batch->records->size);
            status->current_batch = vcf_batch_new(batch_size);

            if (p+1) {
                status->current_batch->text = p+1;
                LOG_DEBUG_F("batch text = '%.*s'\n", 50, status->current_batch->text);
            }
            batches++;
        }

        // If not a blank line, add status->current record to status->current batch
        add_record_to_vcf_batch(status->current_record, status->current_batch);
        // If the record is a structural variant, add it to the set in the VCF file
        add_structural_variant(status->current_record, file);
        status->num_records++;
        status->num_samples = 0;
*/
    }
#line 20 "vcf_v41.ragel"
	{
        ++n_lines;
        n_columns = 1;
    }
	goto st151;
tr137:
#line 223 "vcf_v41.ragel"
	{
//        add_vcf_record_sample(ts, p-ts, status->current_record);
    }
#line 96 "vcf_v41.ragel"
	{
/*        // If batch is full, add to the list of batches and create a new, empty one
        if (batch_size > 0 && status->current_batch->records->size == batch_size)
        {
            add_vcf_batch(status->current_batch, file);
            LOG_DEBUG_F("Batch %d added - %zu records\t", batches, status->current_batch->records->size);
            status->current_batch = vcf_batch_new(batch_size);

            if (p+1) {
                status->current_batch->text = p+1;
                LOG_DEBUG_F("batch text = '%.*s'\n", 50, status->current_batch->text);
            }
            batches++;
        }

        // If not a blank line, add status->current record to status->current batch
        add_record_to_vcf_batch(status->current_record, status->current_batch);
        // If the record is a structural variant, add it to the set in the VCF file
        add_structural_variant(status->current_record, file);
        status->num_records++;
        status->num_samples = 0;
*/
    }
#line 20 "vcf_v41.ragel"
	{
        ++n_lines;
        n_columns = 1;
    }
	goto st151;
st151:
	if ( ++p == pe )
		goto _test_eof151;
case 151:
#line 1650 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 44: goto tr193;
		case 46: goto tr193;
		case 95: goto tr193;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr193;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto tr193;
	} else
		goto tr193;
	goto tr88;
st93:
	if ( ++p == pe )
		goto _test_eof93;
case 93:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st90;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st90;
	} else
		goto st90;
	goto tr129;
st94:
	if ( ++p == pe )
		goto _test_eof94;
case 94:
	switch( (*p) ) {
		case 46: goto st88;
		case 95: goto st95;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st95;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st95;
	} else
		goto st95;
	goto tr122;
tr124:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st95;
st95:
	if ( ++p == pe )
		goto _test_eof95;
case 95:
#line 1705 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr125;
		case 10: goto tr126;
		case 59: goto st94;
		case 61: goto st96;
		case 95: goto st95;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st95;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st95;
	} else
		goto st95;
	goto tr122;
st96:
	if ( ++p == pe )
		goto _test_eof96;
case 96:
	if ( 33 <= (*p) && (*p) <= 126 )
		goto st97;
	goto tr122;
st97:
	if ( ++p == pe )
		goto _test_eof97;
case 97:
	switch( (*p) ) {
		case 9: goto tr125;
		case 10: goto tr126;
	}
	if ( 33 <= (*p) && (*p) <= 126 )
		goto st97;
	goto tr122;
st98:
	if ( ++p == pe )
		goto _test_eof98;
case 98:
	switch( (*p) ) {
		case 44: goto st86;
		case 46: goto st86;
		case 95: goto st86;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st86;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st86;
	} else
		goto st86;
	goto tr117;
tr115:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st99;
st99:
	if ( ++p == pe )
		goto _test_eof99;
case 99:
#line 1768 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr116;
		case 46: goto st100;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st99;
	goto tr113;
st100:
	if ( ++p == pe )
		goto _test_eof100;
case 100:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st101;
	goto tr113;
st101:
	if ( ++p == pe )
		goto _test_eof101;
case 101:
	if ( (*p) == 9 )
		goto tr116;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st101;
	goto tr113;
st102:
	if ( ++p == pe )
		goto _test_eof102;
case 102:
	switch( (*p) ) {
		case 46: goto st82;
		case 65: goto st82;
		case 67: goto st82;
		case 71: goto st82;
		case 78: goto st82;
		case 84: goto st82;
	}
	goto tr103;
tr105:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st103;
st103:
	if ( ++p == pe )
		goto _test_eof103;
case 103:
#line 1815 "vcf_validator_detail.hpp"
	if ( (*p) == 9 )
		goto tr110;
	goto tr103;
tr106:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st104;
st104:
	if ( ++p == pe )
		goto _test_eof104;
case 104:
#line 1829 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 67: goto st105;
		case 68: goto st109;
		case 73: goto st125;
	}
	goto tr103;
st105:
	if ( ++p == pe )
		goto _test_eof105;
case 105:
	if ( (*p) == 78 )
		goto st106;
	goto tr103;
st106:
	if ( ++p == pe )
		goto _test_eof106;
case 106:
	if ( (*p) == 86 )
		goto st107;
	goto tr103;
st107:
	if ( ++p == pe )
		goto _test_eof107;
case 107:
	if ( (*p) == 62 )
		goto st108;
	goto tr103;
st108:
	if ( ++p == pe )
		goto _test_eof108;
case 108:
	if ( (*p) == 9 )
		goto tr151;
	goto tr103;
st109:
	if ( ++p == pe )
		goto _test_eof109;
case 109:
	switch( (*p) ) {
		case 69: goto st110;
		case 85: goto st117;
	}
	goto tr103;
st110:
	if ( ++p == pe )
		goto _test_eof110;
case 110:
	if ( (*p) == 76 )
		goto st111;
	goto tr103;
st111:
	if ( ++p == pe )
		goto _test_eof111;
case 111:
	switch( (*p) ) {
		case 58: goto st112;
		case 62: goto st108;
	}
	goto tr103;
st112:
	if ( ++p == pe )
		goto _test_eof112;
case 112:
	if ( (*p) == 77 )
		goto st113;
	goto tr103;
st113:
	if ( ++p == pe )
		goto _test_eof113;
case 113:
	if ( (*p) == 69 )
		goto st114;
	goto tr103;
st114:
	if ( ++p == pe )
		goto _test_eof114;
case 114:
	if ( (*p) == 58 )
		goto st115;
	goto tr103;
st115:
	if ( ++p == pe )
		goto _test_eof115;
case 115:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st116;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st116;
	} else
		goto st116;
	goto tr103;
st116:
	if ( ++p == pe )
		goto _test_eof116;
case 116:
	if ( (*p) == 62 )
		goto st108;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st116;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st116;
	} else
		goto st116;
	goto tr103;
st117:
	if ( ++p == pe )
		goto _test_eof117;
case 117:
	if ( (*p) == 80 )
		goto st118;
	goto tr103;
st118:
	if ( ++p == pe )
		goto _test_eof118;
case 118:
	switch( (*p) ) {
		case 58: goto st119;
		case 62: goto st108;
	}
	goto tr103;
st119:
	if ( ++p == pe )
		goto _test_eof119;
case 119:
	if ( (*p) == 84 )
		goto st120;
	goto tr103;
st120:
	if ( ++p == pe )
		goto _test_eof120;
case 120:
	if ( (*p) == 65 )
		goto st121;
	goto tr103;
st121:
	if ( ++p == pe )
		goto _test_eof121;
case 121:
	if ( (*p) == 78 )
		goto st122;
	goto tr103;
st122:
	if ( ++p == pe )
		goto _test_eof122;
case 122:
	if ( (*p) == 68 )
		goto st123;
	goto tr103;
st123:
	if ( ++p == pe )
		goto _test_eof123;
case 123:
	if ( (*p) == 69 )
		goto st124;
	goto tr103;
st124:
	if ( ++p == pe )
		goto _test_eof124;
case 124:
	if ( (*p) == 77 )
		goto st107;
	goto tr103;
st125:
	if ( ++p == pe )
		goto _test_eof125;
case 125:
	if ( (*p) == 78 )
		goto st126;
	goto tr103;
st126:
	if ( ++p == pe )
		goto _test_eof126;
case 126:
	switch( (*p) ) {
		case 83: goto st111;
		case 86: goto st107;
	}
	goto tr103;
tr107:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st127;
st127:
	if ( ++p == pe )
		goto _test_eof127;
case 127:
#line 2022 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr110;
		case 44: goto st102;
		case 46: goto st82;
		case 65: goto st127;
		case 67: goto st127;
		case 71: goto st127;
		case 78: goto st127;
		case 84: goto st127;
		case 91: goto st128;
		case 93: goto st133;
	}
	goto tr103;
st128:
	if ( ++p == pe )
		goto _test_eof128;
case 128:
	switch( (*p) ) {
		case 44: goto st129;
		case 46: goto st129;
		case 95: goto st129;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st129;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st129;
	} else
		goto st129;
	goto tr103;
st129:
	if ( ++p == pe )
		goto _test_eof129;
case 129:
	switch( (*p) ) {
		case 44: goto st129;
		case 46: goto st129;
		case 58: goto st130;
		case 95: goto st129;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st129;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st129;
	} else
		goto st129;
	goto tr103;
st130:
	if ( ++p == pe )
		goto _test_eof130;
case 130:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st131;
	goto tr103;
st131:
	if ( ++p == pe )
		goto _test_eof131;
case 131:
	if ( (*p) == 91 )
		goto st132;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st131;
	goto tr103;
st132:
	if ( ++p == pe )
		goto _test_eof132;
case 132:
	if ( (*p) == 9 )
		goto tr175;
	goto tr103;
st133:
	if ( ++p == pe )
		goto _test_eof133;
case 133:
	switch( (*p) ) {
		case 44: goto st134;
		case 46: goto st134;
		case 95: goto st134;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st134;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st134;
	} else
		goto st134;
	goto tr103;
st134:
	if ( ++p == pe )
		goto _test_eof134;
case 134:
	switch( (*p) ) {
		case 44: goto st134;
		case 46: goto st134;
		case 58: goto st135;
		case 95: goto st134;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st134;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st134;
	} else
		goto st134;
	goto tr103;
st135:
	if ( ++p == pe )
		goto _test_eof135;
case 135:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st136;
	goto tr103;
st136:
	if ( ++p == pe )
		goto _test_eof136;
case 136:
	if ( (*p) == 93 )
		goto st132;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st136;
	goto tr103;
tr108:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st137;
st137:
	if ( ++p == pe )
		goto _test_eof137;
case 137:
#line 2159 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 44: goto st138;
		case 46: goto st138;
		case 95: goto st138;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st138;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st138;
	} else
		goto st138;
	goto tr103;
st138:
	if ( ++p == pe )
		goto _test_eof138;
case 138:
	switch( (*p) ) {
		case 44: goto st138;
		case 46: goto st138;
		case 58: goto st139;
		case 95: goto st138;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st138;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st138;
	} else
		goto st138;
	goto tr103;
st139:
	if ( ++p == pe )
		goto _test_eof139;
case 139:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st140;
	goto tr103;
st140:
	if ( ++p == pe )
		goto _test_eof140;
case 140:
	if ( (*p) == 91 )
		goto st141;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st140;
	goto tr103;
st141:
	if ( ++p == pe )
		goto _test_eof141;
case 141:
	switch( (*p) ) {
		case 65: goto st142;
		case 67: goto st142;
		case 71: goto st142;
		case 78: goto st142;
		case 84: goto st142;
	}
	goto tr103;
st142:
	if ( ++p == pe )
		goto _test_eof142;
case 142:
	switch( (*p) ) {
		case 9: goto tr175;
		case 65: goto st142;
		case 67: goto st142;
		case 71: goto st142;
		case 78: goto st142;
		case 84: goto st142;
	}
	goto tr103;
tr109:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st143;
st143:
	if ( ++p == pe )
		goto _test_eof143;
case 143:
#line 2244 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 44: goto st144;
		case 46: goto st144;
		case 95: goto st144;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st144;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st144;
	} else
		goto st144;
	goto tr103;
st144:
	if ( ++p == pe )
		goto _test_eof144;
case 144:
	switch( (*p) ) {
		case 44: goto st144;
		case 46: goto st144;
		case 58: goto st145;
		case 95: goto st144;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st144;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st144;
	} else
		goto st144;
	goto tr103;
st145:
	if ( ++p == pe )
		goto _test_eof145;
case 145:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st146;
	goto tr103;
st146:
	if ( ++p == pe )
		goto _test_eof146;
case 146:
	if ( (*p) == 93 )
		goto st141;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st146;
	goto tr103;
tr97:
#line 12 "vcf_v41.ragel"
	{
        ParsePolicy::handle_token_begin(*this);
    }
	goto st147;
st147:
	if ( ++p == pe )
		goto _test_eof147;
case 147:
#line 2304 "vcf_validator_detail.hpp"
	switch( (*p) ) {
		case 9: goto tr98;
		case 95: goto st147;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st147;
	} else if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st147;
	} else
		goto st147;
	goto tr95;
st148:
	if ( ++p == pe )
		goto _test_eof148;
case 148:
	if ( (*p) == 10 )
		goto tr189;
	goto st148;
tr189:
#line 20 "vcf_v41.ragel"
	{
        ++n_lines;
        n_columns = 1;
    }
#line 316 "vcf_v41.ragel"
	{ {goto st20;} }
	goto st152;
st152:
	if ( ++p == pe )
		goto _test_eof152;
case 152:
#line 2338 "vcf_validator_detail.hpp"
	goto st0;
st149:
	if ( ++p == pe )
		goto _test_eof149;
case 149:
	if ( (*p) == 10 )
		goto tr191;
	goto st149;
tr191:
#line 20 "vcf_v41.ragel"
	{
        ++n_lines;
        n_columns = 1;
    }
#line 317 "vcf_v41.ragel"
	{ {goto st151;} }
	goto st153;
st153:
	if ( ++p == pe )
		goto _test_eof153;
case 153:
#line 2360 "vcf_validator_detail.hpp"
	goto st0;
	}
	_test_eof2: cs = 2; goto _test_eof; 
	_test_eof3: cs = 3; goto _test_eof; 
	_test_eof4: cs = 4; goto _test_eof; 
	_test_eof5: cs = 5; goto _test_eof; 
	_test_eof6: cs = 6; goto _test_eof; 
	_test_eof7: cs = 7; goto _test_eof; 
	_test_eof8: cs = 8; goto _test_eof; 
	_test_eof9: cs = 9; goto _test_eof; 
	_test_eof10: cs = 10; goto _test_eof; 
	_test_eof11: cs = 11; goto _test_eof; 
	_test_eof12: cs = 12; goto _test_eof; 
	_test_eof13: cs = 13; goto _test_eof; 
	_test_eof14: cs = 14; goto _test_eof; 
	_test_eof15: cs = 15; goto _test_eof; 
	_test_eof16: cs = 16; goto _test_eof; 
	_test_eof17: cs = 17; goto _test_eof; 
	_test_eof18: cs = 18; goto _test_eof; 
	_test_eof19: cs = 19; goto _test_eof; 
	_test_eof20: cs = 20; goto _test_eof; 
	_test_eof21: cs = 21; goto _test_eof; 
	_test_eof22: cs = 22; goto _test_eof; 
	_test_eof23: cs = 23; goto _test_eof; 
	_test_eof24: cs = 24; goto _test_eof; 
	_test_eof25: cs = 25; goto _test_eof; 
	_test_eof26: cs = 26; goto _test_eof; 
	_test_eof27: cs = 27; goto _test_eof; 
	_test_eof28: cs = 28; goto _test_eof; 
	_test_eof29: cs = 29; goto _test_eof; 
	_test_eof30: cs = 30; goto _test_eof; 
	_test_eof31: cs = 31; goto _test_eof; 
	_test_eof32: cs = 32; goto _test_eof; 
	_test_eof33: cs = 33; goto _test_eof; 
	_test_eof34: cs = 34; goto _test_eof; 
	_test_eof35: cs = 35; goto _test_eof; 
	_test_eof36: cs = 36; goto _test_eof; 
	_test_eof37: cs = 37; goto _test_eof; 
	_test_eof38: cs = 38; goto _test_eof; 
	_test_eof39: cs = 39; goto _test_eof; 
	_test_eof40: cs = 40; goto _test_eof; 
	_test_eof41: cs = 41; goto _test_eof; 
	_test_eof42: cs = 42; goto _test_eof; 
	_test_eof43: cs = 43; goto _test_eof; 
	_test_eof44: cs = 44; goto _test_eof; 
	_test_eof45: cs = 45; goto _test_eof; 
	_test_eof46: cs = 46; goto _test_eof; 
	_test_eof47: cs = 47; goto _test_eof; 
	_test_eof48: cs = 48; goto _test_eof; 
	_test_eof49: cs = 49; goto _test_eof; 
	_test_eof50: cs = 50; goto _test_eof; 
	_test_eof51: cs = 51; goto _test_eof; 
	_test_eof52: cs = 52; goto _test_eof; 
	_test_eof53: cs = 53; goto _test_eof; 
	_test_eof54: cs = 54; goto _test_eof; 
	_test_eof55: cs = 55; goto _test_eof; 
	_test_eof56: cs = 56; goto _test_eof; 
	_test_eof57: cs = 57; goto _test_eof; 
	_test_eof58: cs = 58; goto _test_eof; 
	_test_eof59: cs = 59; goto _test_eof; 
	_test_eof60: cs = 60; goto _test_eof; 
	_test_eof61: cs = 61; goto _test_eof; 
	_test_eof62: cs = 62; goto _test_eof; 
	_test_eof63: cs = 63; goto _test_eof; 
	_test_eof64: cs = 64; goto _test_eof; 
	_test_eof65: cs = 65; goto _test_eof; 
	_test_eof66: cs = 66; goto _test_eof; 
	_test_eof67: cs = 67; goto _test_eof; 
	_test_eof68: cs = 68; goto _test_eof; 
	_test_eof69: cs = 69; goto _test_eof; 
	_test_eof70: cs = 70; goto _test_eof; 
	_test_eof71: cs = 71; goto _test_eof; 
	_test_eof72: cs = 72; goto _test_eof; 
	_test_eof73: cs = 73; goto _test_eof; 
	_test_eof150: cs = 150; goto _test_eof; 
	_test_eof74: cs = 74; goto _test_eof; 
	_test_eof75: cs = 75; goto _test_eof; 
	_test_eof76: cs = 76; goto _test_eof; 
	_test_eof77: cs = 77; goto _test_eof; 
	_test_eof78: cs = 78; goto _test_eof; 
	_test_eof79: cs = 79; goto _test_eof; 
	_test_eof80: cs = 80; goto _test_eof; 
	_test_eof81: cs = 81; goto _test_eof; 
	_test_eof82: cs = 82; goto _test_eof; 
	_test_eof83: cs = 83; goto _test_eof; 
	_test_eof84: cs = 84; goto _test_eof; 
	_test_eof85: cs = 85; goto _test_eof; 
	_test_eof86: cs = 86; goto _test_eof; 
	_test_eof87: cs = 87; goto _test_eof; 
	_test_eof88: cs = 88; goto _test_eof; 
	_test_eof89: cs = 89; goto _test_eof; 
	_test_eof90: cs = 90; goto _test_eof; 
	_test_eof91: cs = 91; goto _test_eof; 
	_test_eof92: cs = 92; goto _test_eof; 
	_test_eof151: cs = 151; goto _test_eof; 
	_test_eof93: cs = 93; goto _test_eof; 
	_test_eof94: cs = 94; goto _test_eof; 
	_test_eof95: cs = 95; goto _test_eof; 
	_test_eof96: cs = 96; goto _test_eof; 
	_test_eof97: cs = 97; goto _test_eof; 
	_test_eof98: cs = 98; goto _test_eof; 
	_test_eof99: cs = 99; goto _test_eof; 
	_test_eof100: cs = 100; goto _test_eof; 
	_test_eof101: cs = 101; goto _test_eof; 
	_test_eof102: cs = 102; goto _test_eof; 
	_test_eof103: cs = 103; goto _test_eof; 
	_test_eof104: cs = 104; goto _test_eof; 
	_test_eof105: cs = 105; goto _test_eof; 
	_test_eof106: cs = 106; goto _test_eof; 
	_test_eof107: cs = 107; goto _test_eof; 
	_test_eof108: cs = 108; goto _test_eof; 
	_test_eof109: cs = 109; goto _test_eof; 
	_test_eof110: cs = 110; goto _test_eof; 
	_test_eof111: cs = 111; goto _test_eof; 
	_test_eof112: cs = 112; goto _test_eof; 
	_test_eof113: cs = 113; goto _test_eof; 
	_test_eof114: cs = 114; goto _test_eof; 
	_test_eof115: cs = 115; goto _test_eof; 
	_test_eof116: cs = 116; goto _test_eof; 
	_test_eof117: cs = 117; goto _test_eof; 
	_test_eof118: cs = 118; goto _test_eof; 
	_test_eof119: cs = 119; goto _test_eof; 
	_test_eof120: cs = 120; goto _test_eof; 
	_test_eof121: cs = 121; goto _test_eof; 
	_test_eof122: cs = 122; goto _test_eof; 
	_test_eof123: cs = 123; goto _test_eof; 
	_test_eof124: cs = 124; goto _test_eof; 
	_test_eof125: cs = 125; goto _test_eof; 
	_test_eof126: cs = 126; goto _test_eof; 
	_test_eof127: cs = 127; goto _test_eof; 
	_test_eof128: cs = 128; goto _test_eof; 
	_test_eof129: cs = 129; goto _test_eof; 
	_test_eof130: cs = 130; goto _test_eof; 
	_test_eof131: cs = 131; goto _test_eof; 
	_test_eof132: cs = 132; goto _test_eof; 
	_test_eof133: cs = 133; goto _test_eof; 
	_test_eof134: cs = 134; goto _test_eof; 
	_test_eof135: cs = 135; goto _test_eof; 
	_test_eof136: cs = 136; goto _test_eof; 
	_test_eof137: cs = 137; goto _test_eof; 
	_test_eof138: cs = 138; goto _test_eof; 
	_test_eof139: cs = 139; goto _test_eof; 
	_test_eof140: cs = 140; goto _test_eof; 
	_test_eof141: cs = 141; goto _test_eof; 
	_test_eof142: cs = 142; goto _test_eof; 
	_test_eof143: cs = 143; goto _test_eof; 
	_test_eof144: cs = 144; goto _test_eof; 
	_test_eof145: cs = 145; goto _test_eof; 
	_test_eof146: cs = 146; goto _test_eof; 
	_test_eof147: cs = 147; goto _test_eof; 
	_test_eof148: cs = 148; goto _test_eof; 
	_test_eof152: cs = 152; goto _test_eof; 
	_test_eof149: cs = 149; goto _test_eof; 
	_test_eof153: cs = 153; goto _test_eof; 

	_test_eof: {}
	if ( p == eof )
	{
	switch ( cs ) {
	case 1: 
	case 2: 
	case 3: 
	case 4: 
	case 5: 
	case 6: 
	case 7: 
	case 8: 
	case 9: 
	case 10: 
	case 11: 
	case 12: 
	case 13: 
#line 29 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_fileformat_section_error(*this);
        p--; {goto st148;}
    }
	break;
	case 18: 
	case 19: 
	case 21: 
	case 22: 
	case 23: 
	case 24: 
	case 25: 
	case 26: 
	case 27: 
#line 34 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st148;}
    }
	break;
	case 28: 
	case 29: 
	case 30: 
	case 31: 
	case 32: 
	case 33: 
	case 34: 
	case 35: 
	case 36: 
	case 37: 
	case 38: 
	case 39: 
	case 40: 
	case 41: 
	case 42: 
	case 43: 
	case 44: 
	case 45: 
	case 46: 
	case 47: 
	case 48: 
	case 49: 
	case 50: 
	case 51: 
	case 52: 
	case 53: 
	case 54: 
	case 55: 
	case 56: 
	case 57: 
	case 58: 
	case 59: 
	case 60: 
	case 61: 
	case 62: 
	case 63: 
	case 64: 
	case 65: 
	case 66: 
	case 67: 
	case 68: 
	case 69: 
	case 70: 
	case 71: 
	case 72: 
	case 73: 
#line 39 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_header_section_error(*this);
        p--; {goto st149;}
    }
	break;
	case 17: 
	case 20: 
#line 34 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st148;}
    }
#line 39 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_header_section_error(*this);
        p--; {goto st149;}
    }
	break;
	case 14: 
	case 15: 
#line 53 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_fileformat_section_error(*this,
            "Fileformat must be a sequence of alphanumeric and/or punctuation characters");
        p--; {goto st148;}
    }
#line 29 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_fileformat_section_error(*this);
        p--; {goto st148;}
    }
	break;
	case 74: 
#line 124 "vcf_v41.ragel"
	{
    }
#line 44 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st149;}
    }
	break;
	case 75: 
	case 76: 
#line 133 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this, "Position must be a positive number");
        p--; {goto st149;}
    }
#line 44 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st149;}
    }
	break;
	case 77: 
	case 78: 
	case 147: 
#line 142 "vcf_v41.ragel"
	{
        printf("Line %zu: Error in 'id' field\n", n_lines);
 //       vcf_record_free(status->current_record);
    }
#line 44 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st149;}
    }
	break;
	case 79: 
	case 80: 
#line 151 "vcf_v41.ragel"
	{
        printf("Line %zu: Error in 'reference' field\n", n_lines);
//        vcf_record_free(status->current_record);
    }
#line 44 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st149;}
    }
	break;
	case 81: 
	case 82: 
	case 102: 
	case 103: 
	case 104: 
	case 105: 
	case 106: 
	case 107: 
	case 108: 
	case 109: 
	case 110: 
	case 111: 
	case 112: 
	case 113: 
	case 114: 
	case 115: 
	case 116: 
	case 117: 
	case 118: 
	case 119: 
	case 120: 
	case 121: 
	case 122: 
	case 123: 
	case 124: 
	case 125: 
	case 126: 
	case 127: 
	case 128: 
	case 129: 
	case 130: 
	case 131: 
	case 132: 
	case 133: 
	case 134: 
	case 135: 
	case 136: 
	case 137: 
	case 138: 
	case 139: 
	case 140: 
	case 141: 
	case 142: 
	case 143: 
	case 144: 
	case 145: 
	case 146: 
#line 176 "vcf_v41.ragel"
	{
        printf("Line %zu: Error in 'alternate' field\n", n_lines);
 //       vcf_record_free(status->current_record);
    }
#line 44 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st149;}
    }
	break;
	case 83: 
	case 84: 
	case 99: 
	case 100: 
	case 101: 
#line 191 "vcf_v41.ragel"
	{
        printf("Line %zu: Error in 'quality' field\n", n_lines);
 //       vcf_record_free(status->current_record);
    }
#line 44 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st149;}
    }
	break;
	case 85: 
	case 86: 
	case 98: 
#line 200 "vcf_v41.ragel"
	{
        printf("Line %zu: Error in 'filter' field\n", n_lines);
 //       vcf_record_free(status->current_record);
    }
#line 44 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st149;}
    }
	break;
	case 87: 
	case 88: 
	case 94: 
	case 95: 
	case 96: 
	case 97: 
#line 209 "vcf_v41.ragel"
	{
        printf("Line %zu: Error in 'info' field\n", n_lines);
 //       vcf_record_free(status->current_record);
    }
#line 44 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st149;}
    }
	break;
	case 89: 
	case 90: 
	case 93: 
#line 218 "vcf_v41.ragel"
	{
        printf("Line %zu: Error in 'format' field\n", n_lines);
 //       vcf_record_free(status->current_record);
    }
#line 44 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st149;}
    }
	break;
	case 91: 
	case 92: 
#line 227 "vcf_v41.ragel"
	{
        printf("Line %zu: Error in sample\n", n_lines);
//        vcf_record_free(status->current_record);
    }
#line 44 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_body_section_error(*this);
        p--; {goto st149;}
    }
	break;
	case 16: 
#line 29 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_fileformat_section_error(*this);
        p--; {goto st148;}
    }
#line 34 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_meta_section_error(*this);
        p--; {goto st148;}
    }
#line 39 "vcf_v41.ragel"
	{
        ErrorPolicy::handle_header_section_error(*this);
        p--; {goto st149;}
    }
	break;
#line 2832 "vcf_validator_detail.hpp"
	}
	}

	_out: {}
	}

#line 380 "vcf_v41.ragel"

    }

  }
}
