/* -*- c++ -*- */
/* 
 * Copyright 2015 Felix Wunsch, Communications Engineering Lab (CEL) / Karlsruhe Institute of Technology (KIT) <wunsch.felix@googlemail.com>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_IEEE802_15_4_PREAMBLE_SFD_PREFIXER_II_H
#define INCLUDED_IEEE802_15_4_PREAMBLE_SFD_PREFIXER_II_H

#include <ie802_15_4/api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace ie802_15_4 {

    /*!
     * \brief <+description of block+>
     * \ingroup ie802_15_4
     *
     */
    class IEEE802_15_4_API preamble_sfd_prefixer_ii : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<preamble_sfd_prefixer_ii> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of ie802_15_4::preamble_sfd_prefixer_ii.
       *
       * To avoid accidental use of raw pointers, ie802_15_4::preamble_sfd_prefixer_ii's
       * constructor is in a private implementation
       * class. ie802_15_4::preamble_sfd_prefixer_ii::make is the public interface for
       * creating new instances.
       */
      static sptr make(std::vector<int> preamble, std::vector<int> sfd, int nsym_frame);
    };

  } // namespace ie802_15_4
} // namespace gr

#endif /* INCLUDED_IEEE802_15_4_PREAMBLE_SFD_PREFIXER_II_H */

